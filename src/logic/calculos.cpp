#include "calculos.h"
#include <cmath>

namespace num = constantesNumericas;

namespace mathematicCalc
{
    // La fuerza gravitatoria se calcula mediante la siguiente formula: F = (G * (M * m) / r²).
    double calculateGravitationalForce(double planetRadius, double objectHeight, double objectMass, double planetMass)
    {
        // En este punto ya contamos con todas las variables necesarias para poder calcular la fuerza gravitatoria:
        const double distance{planetRadius + objectHeight};

        return (num::gravityConstant * planetMass * objectMass) / (distance * distance);
    }

    // La aceleracion gravitatoria se calcula mediante la siguiente formula: g = (G * M) / r².
    double calculateGravitationalAcceleration(double planetRadius, double objectHeight, double planetMass)
    {
        // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la aceleracion gravitatoria.
        const double distance{planetRadius + objectHeight};

        return (num::gravityConstant * planetMass) / (distance * distance);
    }

     // La velocidad de escape se calcula mediante la siguiente formula: v_e = sqrt((2 * G * M)/r).
    double calculateEscapingVelocity(double planetRadius, double objectHeight, double planetMass)
    {
        // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la velocidad de escape.
        const double distance{planetRadius + objectHeight};

        return std::sqrt(
            (2 * num::gravityConstant * planetMass) / (distance));
    }
}
