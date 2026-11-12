#pragma once
#include "bodies.h"

namespace manager
{
    void manageCalculateGravitationalForce(const bodies::Planet* planet, const bodies::Object* object);
    void manageCalculateGravitationalAcceleration(const bodies::Planet* planet, const bodies::Object* object);
    void manageCalculateEscapingVelocity(const bodies::Planet* planet, const bodies::Object* object);
    void manageCalculateOrbitalSpeed(const bodies::Planet *planet, const bodies::Object *object);
    void manageCalculateOrbitalPeriod(const bodies::Planet *planet, const bodies::Object *object);
}
