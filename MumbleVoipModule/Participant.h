// For conditions of distribution and use, see copyright notice in license.txt

#pragma once

#include "CommunicationsService.h"

namespace MumbleLib
{
    class User;
}

namespace MumbleVoip
{
    /// ParticipantInterface implementation using mumble User object
    class Participant : public Communications::InWorldVoice::ParticipantInterface
    {
        Q_OBJECT
    public:
        Participant(QString name, MumbleLib::User* user);
        virtual ~Participant();
    public slots:
        virtual QString Name() const;
        virtual QString AvatarUUID() const;
        virtual void SetAvatarUUID(QString uuid);
        virtual bool IsSpeaking() const;
        virtual void Mute(bool mute);
        virtual bool IsMuted() const;
        virtual Vector3df Position() const;
        virtual void Add(MumbleLib::User* user);
        virtual MumbleLib::User* UserPtr() const;
        virtual double VoiceActivity() const;
        virtual void SetName(QString name);

    private:
        bool muted_;
        bool speaking_;
        bool position_known_;
        Vector3df position_;
        MumbleLib::User* user_;
        QString name_;
        QString avatar_uuid_;
        double voice_activity_;

    private slots:
        void OnStartSpeaking();
        void OnStopSpeaking();
        void OnPositionUpdated();
        void OnUserLeft();
        void UserObjectDestroyed();
    };
    typedef QList<Participant*> ParticipantList;

} // MumbleVoip

// incl_MumbleVoipModule_Participant_h
