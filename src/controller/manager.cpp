#include "manager.h"
#include "dialogos.h"
#include "calculos.h"

namespace manager
{
    void manageCalculateGravitationalForce(const bodies::Planet *planet, const bodies::Object *object)
    {

        double result{mathematicCalc::calculateGravitationalForce(planet, object)};

        dialogs::showResult(literals::gravitationalForceResult, result, " N.\n");
    }

    void manageCalculateGravitationalAcceleration(const bodies::Planet *planet, const bodies::Object *object)
    {
        double result{mathematicCalc::calculateGravitationalAcceleration(planet, object)};

        dialogs::showResult(literals::gravitationalAccelerationResult, result, " m/s².\n");
    }

    void manageCalculateEscapingVelocity(const bodies::Planet *planet, const bodies::Object *object)
    {
        double result{mathematicCalc::calculateEscapingVelocity(planet, object)};

        dialogs::showResult(literals::escapeVelocityResult, result, " m/s.\n");
    }

    void manageCalculateOrbitalSpeed(const bodies::Planet *planet, const bodies::Object *object)
    {
        double result{mathematicCalc::calculateOrbitalSpeed(planet, object)};

        dialogs::showResult(literals::orbitalSpeedResult, result, " m/s.\n");
    }
    void manageCalculateOrbitalPeriod(const bodies::Planet *planet, const bodies::Object *object)
    {
        double result{mathematicCalc::calculateOrbitalPeriod(planet, object)};

        dialogs::showResult(literals::orbitalPeriodResult, result, " s.\n");
    }

}
