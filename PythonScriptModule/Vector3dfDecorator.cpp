// For conditions of distribution and use, see copyright notice in license.txt

#include "StableHeaders.h"
#include "DebugOperatorNew.h"
#include "MemoryLeakCheck.h"
#include "Vector3dfDecorator.h"

namespace PythonScript {
    Vector3df* Vector3dfDecorator::new_Vector3df(const float x, const float y, const float z)
    {
        return new Vector3df(x, y, z);
    }
    
    Vector3df* Vector3dfDecorator::new_Vector3df()
    {
        return new Vector3df();
    }
    
    void Vector3dfDecorator::delete_Vector3df(Vector3df *self)
    {
        delete self;
    }

    float Vector3dfDecorator::x(Vector3df* self)
    {
        return self->x;
    }
    
    float Vector3dfDecorator::y(Vector3df* self)
    {
        return self->y;
    }
    
    float Vector3dfDecorator::z(Vector3df* self)
    {
        return self->z;
    }

    void Vector3dfDecorator::setx(Vector3df* self, float value)
    {
        self->x = value;
    }
    
    void Vector3dfDecorator::sety(Vector3df* self, float value)
    {
        self->y = value;
    }
    
    void Vector3dfDecorator::setz(Vector3df* self, float value)
    {
        self->z = value;
    }
    
    float Vector3dfDecorator::getLength(const Vector3df* self)
    {
        return self->getLength();
    }
    
    float Vector3dfDecorator::getLengthSQ(const Vector3df* self)
    {
        return self->getLengthSQ();
    }
    
    void Vector3dfDecorator::setLength(Vector3df* self, float length)
    {
        self->setLength(length);
    }
    
    float Vector3dfDecorator::dotProduct(const Vector3df* self, const Vector3df& other)
    {
        return self->dotProduct(other);
    }
    
    float Vector3dfDecorator::getDistanceFrom(const Vector3df* self, const Vector3df& second)
    {
        return self->getDistanceFrom(second);
    }
    
    float Vector3dfDecorator::getDistanceFromSQ(const Vector3df* self, const Vector3df& second)
    {
        return self->getDistanceFromSQ(second);
    }
    
    Vector3df Vector3dfDecorator::crossProduct(const Vector3df* self, const Vector3df& other)
    {
        return self->crossProduct(other);
    }
    
    bool Vector3dfDecorator::isBetweenPoints(const Vector3df* self, const Vector3df& begin, const Vector3df& end)
    {
        return self->isBetweenPoints(begin, end);
    }
    
    void Vector3dfDecorator::normalize(Vector3df* self)
    {
        self->normalize();
    }
    
    void Vector3dfDecorator::invert(Vector3df* self)
    {
        self->invert();
    }
    
    void Vector3dfDecorator::rotateXZBy(Vector3df* self, float degrees, const Vector3df& center)
    {
        self->rotateXZBy(degrees, center);
    }
    
    void Vector3dfDecorator::rotateXYBy(Vector3df* self, float degrees, const Vector3df& center)
    {
        self->rotateXYBy(degrees, center);
    }
    
    void Vector3dfDecorator::rotateYZBy(Vector3df* self, float degrees, const Vector3df& center)
    {
        self->rotateYZBy(degrees, center);
    }
    
    Vector3df Vector3dfDecorator::getInterpolated(Vector3df* self, const Vector3df& vec, float factor)
    {
        return self->getInterpolated(vec, factor);
    }
    
    Vector3df Vector3dfDecorator::getInterpolated_quadratic(Vector3df* self, const Vector3df& vec2, const Vector3df& vec3, float factor)
    {
        return self->getInterpolated_quadratic(vec2, vec3, factor);
    }
    
    void Vector3dfDecorator::interpolate(Vector3df* self, const Vector3df& vec1, const Vector3df& vec2, float factor)
    {
        self->interpolate(vec1, vec2, factor);
    }
    
    Vector3df Vector3dfDecorator::getHorizontalAngle(Vector3df* self)
    {
        return self->getHorizontalAngle();
    }
    
    Vector3df Vector3dfDecorator::rotationToDirection(Vector3df* self, const Vector3df& vec)
    {
        return self->rotationToDirection(vec);
    }
}
