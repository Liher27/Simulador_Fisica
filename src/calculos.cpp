#include "calculos.h"
#include "dialogos.h"
#include <iostream>
#include <cmath>

// La fuerza gravitacional se calcula mediante la siguiente formula: F = (G * (M * m) / r²).
void calculateGravitationalForce(int wishedPlanet)
{
    float objectHeight{};
    objectHeight = askForHeight();

    int objectMass{};
    objectMass = askForObjectMass();

    // En este punto ya contamos con todas las variables necesarias para poder calcular la fuerza gravitacional:
    double gravitationalForce{};

    if (wishedPlanet == 1)
    {
        const double distance{constantesNumericas::earthRadius + objectHeight};

        gravitationalForce =
            (constantesNumericas::gravityConstant * constantesNumericas::earthMass * objectMass) / (distance * distance);
    }
    else if (wishedPlanet == 2)
    {
        const double distance{constantesNumericas::jupiterRadius + objectHeight};

        gravitationalForce =
            (constantesNumericas::gravityConstant * constantesNumericas::jupiterMass * objectMass) / (distance * distance);
    }

    std::cout << literales::gravitationalForceResult << gravitationalForce << "N.\n";
}

// La fuerza gravitacional se calcula mediante la siguiente formula: g = (G * M) / r².
void calculateGravitationalAcceleration(int wishedPlanet)
{
    float objectHeight{};
    objectHeight = askForHeight();

    // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la aceleracion gravitacional.
    double gravitationalAcceleration{};

    if (wishedPlanet == 1)
    {
        const double distance{constantesNumericas::earthRadius + objectHeight};

        gravitationalAcceleration =
            (constantesNumericas::gravityConstant * constantesNumericas::earthMass) / (distance * distance);
    }
    else if (wishedPlanet == 2)
    {
        const double distance{constantesNumericas::jupiterRadius + objectHeight};

        gravitationalAcceleration =
            (constantesNumericas::gravityConstant * constantesNumericas::jupiterMass) / (distance * distance);
    }

    std::cout << literales::gravitationalAccelerationResult << gravitationalAcceleration << "m/s².\n";
}

void calculateEscapingVelocity(int wishedPlanet)
{
    float objectHeight{};
    objectHeight = askForHeight();

    // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la velocidad de escape.
    double escapeVelocity{};

    if (wishedPlanet == 1)
    {
        const double distance{constantesNumericas::earthRadius + objectHeight};

        escapeVelocity =std::sqrt(
            (2 * constantesNumericas::gravityConstant * constantesNumericas::earthMass) / (distance));
    }
    else if (wishedPlanet == 2)
    {
        const double distance{constantesNumericas::jupiterRadius + objectHeight};

        escapeVelocity =std::sqrt(
            (2* constantesNumericas::gravityConstant * constantesNumericas::jupiterMass) / (distance));
    }

    std::cout << literales::escapeVelocityResult << escapeVelocity << "m/s.\n";
}
