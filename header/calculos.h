#ifndef CALCULOS_HEADER
#define CALCULOS_HEADER

void calculateGravitationalForce(int wishedPlanet);
void calculateGravitationalAcceleration(int wishedPlanet);
void calculateEscapingVelocity(int wishedPlanet);

namespace constantesNumericas
{
    constexpr int opcionUnoInt{1};
    constexpr int opcionDosInt{2};
    constexpr int opcionTresInt{3};
    constexpr int opcionCuatroInt{4};

    constexpr double gravityConstant{6.67430e-11};
    
    constexpr double earthMass{5.9722e24};
    constexpr double earthRadius{6.371e6};

    constexpr double jupiterMass{1.89813e27};
    constexpr double jupiterRadius{6.9911e7};

}

#endif
