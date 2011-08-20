#ifndef MumbleVoipModule_LinkPlugin_h
#define MumbleVoipModule_LinkPlugin_h

#include <QObject>
#include "Core.h"

namespace MumbleVoip
{

struct LinkedMem;

/**
 *  Implements Mumble Link plugin.
 *  @see http://mumble.sourceforge.net/Link
 *
 *  @todo: free linked_mem when Stop method is called
 */
class LinkPlugin : public QObject
{
	Q_OBJECT
public:
	LinkPlugin();
	virtual ~LinkPlugin();

public slots:

    /// Set state to on mode
    virtual void Start();

    /// Set state off mode
    virtual void Stop();

    /// @return true if Start method is called and connection to shared memory with mumble client is  established. Otherwise return false.
    virtual bool IsRunning() const;

    /// @return reason for current state.
    virtual QString GetReason() const;

	/// Send data to Mumble client application
	virtual void SendData();

	///// Set name for avatar
	virtual void SetApplicationName(const QString& name);

	/// Set identity for avatar
	virtual void SetUserIdentity(const QString& identity);

    /// Set context aka 'group identifier'
    virtual void SetContextId(const QString& id);

    /// Set application description
    virtual void SetApplicationDescription(const QString& description);

	/// Set avatar position vectors
    ///
    /// Left handed coordinate system.
	///  X positive towards "left".
	///  Y positive towards "up".
	///  Z positive towards "into screen".
	///
	///  1 unit = 1 meter
	virtual void SetAvatarPosition(Vector3df position, Vector3df front, Vector3df top);

	/// Set camera position vectors
    ///
    /// Left handed coordinate system.
	///  X positive towards "left".
	///  Y positive towards "up".
	///  Z positive towards "into screen".
	///
	///  1 unit = 1 meter
	virtual void SetCameraPosition(Vector3df position, Vector3df front, Vector3df top);

protected:
    virtual void InitializeLinkedMem();

	LinkedMem* linked_mem_;
    QString application_name_;
    QString user_id_;
    QString context_id;
    QString application_description_;
    Vector3df avatar_position_;
    Vector3df avatar_top_;
    Vector3df avatar_front_;
    Vector3df camera_position_;
    Vector3df camera_top_;
    Vector3df camera_front_;
    bool send_data_;
    QString reason_;
};

} // end of namespace: MumbleVoip

#endif // MumbleVoipModule_LinkPlugin_h
