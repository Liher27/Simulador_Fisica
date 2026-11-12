#pragma once
#include "bodies.h"

namespace mathematicCalc
{
    double calculateGravitationalForce(const bodies::Planet *planet, const bodies::Object *object);
    double calculateGravitationalAcceleration(const bodies::Planet *planet, const bodies::Object *object);
    double calculateEscapingVelocity(const bodies::Planet *planet, const bodies::Object *object);
    double calculateOrbitalSpeed(const bodies::Planet *planet, const bodies::Object *object);
    double calculateOrbitalPeriod(const bodies::Planet *planet, const bodies::Object *object);
}
namespace numericConstants
{

    constexpr double gravityConstant{6.67430e-11};

    constexpr double earthMass{5.9722e24};
    constexpr double earthRadius{6.371e6};

    constexpr double jupiterMass{1.89813e27};
    constexpr double jupiterRadius{6.9911e7};

}
