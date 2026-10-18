#include "dialogos.h"
#include "calculos.h"
#include "manager.h"
#include <iostream>
/*
    En este proyecto se van a estudiar las practicas de los punteros.
*/
int main()
{
    int wishedPlanet{dialogs::askForPlanet()};

    while (true)
    {
        int opcion = dialogs::menuDisplay();

        if (opcion == literals::opcionUnoInt)
        {
            manager::manageCalculateGravitationalForce(wishedPlanet);
        }
        else if (opcion == literals::opcionDosInt)
        {
            manager::manageCalculateGravitationalAcceleration(wishedPlanet);
        }
        else if (opcion == literals::opcionTresInt)
        {
            manager::manageCalculateEscapingVelocity(wishedPlanet);
        }
        else if (opcion == literals::opcionCuatroInt)
            break;
    }

    std::cout << literals::goodbyeSV << "\n";
    return 0;
}
