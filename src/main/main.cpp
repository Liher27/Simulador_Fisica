#include "dialogos.h"
#include "manager.h"
#include <iostream>

int main()
{
    // int wishedPlanet{dialogs::askForPlanet()};
    bool bucle{true};
    int opcion{};

    bodies::Planet planet{};
    bodies::Object object{};

    /*
        sobrecarga del operador << para mostrar structs
        std::ostream& operator<<(std::ostream& out, const Employee& e)
        {
            out << e.id << ' ' << e.age << ' ' << e.wage;
            return out;
        }
    */

    while (bucle)
    {

        dialogs::menuDisplay(opcion);

        switch (opcion)
        {
        case literals::opcionUnoInt:
        {
            dialogs::askUserForPlanet(planet);
            dialogs::askUserForObject(object);

            manager::manageCalculateGravitationalForce(&planet, &object);
            break;
        }

        case literals::opcionDosInt:
        {
            dialogs::askUserForPlanet(planet);
            dialogs::askUserForObject(object);

            manager::manageCalculateGravitationalAcceleration(&planet, &object);

            break;
        }

        case literals::opcionTresInt:
        {
            dialogs::askUserForPlanet(planet);
            dialogs::askUserForObject(object);

            manager::manageCalculateEscapingVelocity(&planet, &object);

            break;
        }

        case literals::opcionCuatroInt:
        {
            dialogs::askUserForPlanet(planet);
            dialogs::askUserForObject(object);

            manager::manageCalculateOrbitalSpeed(&planet, &object);

            break;
        }
        case literals::opcionCincoInt:
        {
            dialogs::askUserForPlanet(planet);
            dialogs::askUserForObject(object);

            manager::manageCalculateOrbitalPeriod(&planet, &object);

            break;
        }
        case literals::opcionSeisInt:
        {
            bucle = false;
            break;
        }
        default:
            std::cout << literals::errorInputSV;
            break;
        }
    }

    std::cout << literals::goodbyeSV << "\n";
    return 0;
}
