#ifndef CALCULOS_HEADER
#define CALCULOS_HEADER

namespace mathematicCalc
{
    double calculateGravitationalForce(double planetRadius, double objectHeight, double objectMass, double planetMass);
    double calculateGravitationalAcceleration(double planetRadius, double objectHeight, double planetMass);
    double calculateEscapingVelocity(double planetRadius, double objectHeight, double planetMass);
}
namespace constantesNumericas
{
    

    constexpr double gravityConstant{6.67430e-11};

    constexpr double earthMass{5.9722e24};
    constexpr double earthRadius{6.371e6};

    constexpr double jupiterMass{1.89813e27};
    constexpr double jupiterRadius{6.9911e7};

}

#endif
