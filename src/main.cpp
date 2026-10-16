#include "dialogos.h"
#include "calculos.h"
#include <iostream>
/*
    En este proyecto se van a estudiar las practicas de los punteros.
*/
int main()
{
    while (true)
    {
        int opcion = pintarMenu();
        
        int wishedPlanet {};
        
        if (opcion != 4)
        {
            wishedPlanet = pedirPlaneta();
        }
        if (opcion == constantesNumericas::opcionUnoInt)
        {
            calculateGravitationalForce(wishedPlanet);
        }
        else if (opcion == constantesNumericas::opcionDosInt)
        {
            calculateGravitationalAcceleration(wishedPlanet);
        }
        else if (opcion == constantesNumericas::opcionTresInt)
        {
            calculateEscapingVelocity(wishedPlanet);
        }
        else if (opcion == constantesNumericas::opcionCuatroInt)
            break;
    }

    std::cout << literales::despedidaSV << "\n";
    return 0;
}
