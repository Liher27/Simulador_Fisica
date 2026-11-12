#include "calculos.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

namespace num = numericConstants;

namespace mathematicCalc
{
    // La fuerza gravitatoria se calcula mediante la siguiente formula: F = (G * (M * m) / r²).
    double calculateGravitationalForce(const bodies::Planet *planet, const bodies::Object *object)
    {
        // En este punto ya contamos con todas las variables necesarias para poder calcular la fuerza gravitatoria:
        const double distance{planet->planetRadius + object->objectHeight};

        return (num::gravityConstant * planet->planetMass * object->objectMass) / (distance * distance);
    }

    // La aceleracion gravitatoria se calcula mediante la siguiente formula: g = (G * M) / r².
    double calculateGravitationalAcceleration(const bodies::Planet *planet, const bodies::Object *object)
    {
        // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la aceleracion gravitatoria.
        const double distance{planet->planetRadius + object->objectHeight};

        return (num::gravityConstant * planet->planetMass) / (distance * distance);
    }

    // La velocidad de escape se calcula mediante la siguiente formula: v_e = sqrt((2 * G * M)/r).
    double calculateEscapingVelocity(const bodies::Planet *planet, const bodies::Object *object)
    {
        // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la velocidad de escape.
        const double distance{planet->planetRadius + object->objectHeight};

        return std::sqrt(
            (2 * num::gravityConstant * planet->planetMass) / distance);
    }

    /*
    La velocidad de órbita es utilizada para calcular la velocidad que debe de llevar un satelite para mantenerse en orbita respecto a un planeta.
    Es una formula que está directamente relacionada con la velocidad de escape: v_o = sqrt((G* M) /r). se puede ver que la velocidad de escape es siempre
    sqrt2 veces la velocidad de orbita, es decir, un 40% aproximadamente.
    */
    double calculateOrbitalSpeed(const bodies::Planet *planet, const bodies::Object *object)
    {

        // En este caso, con obtener la altura del objeto sobre el planeta, nos bastará para calcular la velocidad de órbita.
        const double distance{planet->planetRadius + object->objectHeight};

        return std::sqrt(
            (num::gravityConstant * planet->planetMass) / distance);
    }

    /*
    El periodo de orbita representa el tiempo que tarda un cuerpo en completar su órbita respecto al planeta que orbita. Se mide en segundos, y está relacionado
    con la velocidad orbital, ya que la formula original es: v_o = 2⁢*𝜋*T. si sustituimos, llegamos a la siguiente formula: T = 2⁢ * 𝜋 *⁢ sqrt(r³/(G * M)).
    */
    double calculateOrbitalPeriod(const bodies::Planet *planet, const bodies::Object *object)
    {

        // Calculamos la distancia al cubo (necesaria en la formula):
        const double cubicDistance{pow(planet->planetRadius + object->objectHeight, 3)};

        return (2 * M_PI * sqrt(cubicDistance / (num::gravityConstant * planet->planetMass)));
    }
}
