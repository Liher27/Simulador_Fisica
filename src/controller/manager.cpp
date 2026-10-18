#include "manager.h"
#include "dialogos.h"
#include "calculos.h"

namespace manager
{
    void manageCalculateGravitationalForce(int wishedPlanet)
    {
        double objectHeight{dialogs::askForHeight()};
        double objectMass{dialogs::askForObjectMass()};

        double result {mathematicCalc::calculateGravitationalForce(wishedPlanet == 1 ? constantesNumericas::earthRadius : constantesNumericas::jupiterRadius, objectHeight, objectMass, wishedPlanet == 1 ? constantesNumericas::earthMass : constantesNumericas::jupiterMass)};
        
        dialogs::showResult(literals::gravitationalForceResult, result, " N.\n");
    }

    void manageCalculateGravitationalAcceleration(int wishedPlanet)
    {
        double objectHeight{dialogs::askForHeight()};
        double result {mathematicCalc::calculateGravitationalAcceleration(wishedPlanet == 1 ? constantesNumericas::earthRadius : constantesNumericas::jupiterRadius, objectHeight, wishedPlanet == 1 ? constantesNumericas::earthMass : constantesNumericas::jupiterMass)};

        dialogs::showResult(literals::gravitationalAccelerationResult, result, " m/s².\n");
    }

    void manageCalculateEscapingVelocity(int wishedPlanet)
    {
        double objectHeight{dialogs::askForHeight()};
        double result {mathematicCalc::calculateEscapingVelocity(wishedPlanet == 1 ? constantesNumericas::earthRadius : constantesNumericas::jupiterRadius, objectHeight, wishedPlanet == 1 ? constantesNumericas::earthMass : constantesNumericas::jupiterMass)};
        
        dialogs::showResult(literals::escapeVelocityResult, result, " m/s.\n");
    }

}
