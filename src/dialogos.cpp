#include "dialogos.h"
#include <iostream>
#include <limits>

int pintarMenu()
{
    int operacion{};
    while (true)
    {
        if (!clearFailedExtraction())
        {
            std::cout << "\n"
                      << literales::tituloAppSV << "\n";

            std::cout << literales::opcionUnoSV << "\n";
            std::cout << literales::opcionDosSV << "\n";
            std::cout << literales::opcionTresSV << "\n";
            std::cout << literales::opcionCuatroSV << "\n";

            std::cin >> operacion;

            if (operacion == 1 || operacion == 2 || operacion == 3 || operacion == 4)
            {
                break;
            }
            else
            {
                std::cout << literales::errorInputSV << "\n";
            }
        }
    }

    return operacion;
}

int pedirPlaneta()
{
    int option{};
    while (true)
    {
        if (!clearFailedExtraction())
        {
            std::cout << literales::planetSelectionTitleSV;

            std::cout << literales::earthOptionSV;
            std::cout << literales::jupiterOptionSV;
            /*std::cout << literales::customPlanetOptionSV;*/

            std::cin >> option;

            if (option == 1 || option == 2)
                break;
        }
        else
        {
            std::cout << literales::errorInputSV << "\n";
        }
    }

    return option;
}

float askForHeight()
{
    float height{};
    while (true)
    {
        if (!clearFailedExtraction())
        {
            std::cout << literales::heightSelectionTitleSV;

            std::cin >> height;
            if (height > 0)
            {
                break;
            } else
            {
                std::cout << literales::invalidValue;
            }
        }
        else
        {
            std::cout << literales::errorInputSV << "\n";
        }
    }

    return height;
}

int askForObjectMass()
{
    int mass{};
    while (true)
    {
        if (!clearFailedExtraction())
        {
            std::cout << literales::objectMassSelectionTitleSV;

            std::cin >> mass;
            if (mass > 0)
            {
                break;
            }
            else
            {
                std::cout << literales::invalidValue;
            }
        }
        else
        {
            std::cout << literales::errorInputSV << "\n";
        }
    }

    return mass;
}

// returns true if extraction failed, false otherwise
bool clearFailedExtraction()
{
    // Check for failed extraction
    if (!std::cin) // If the previous extraction failed
    {
        if (std::cin.eof()) // If the stream was closed
        {
            std::exit(0); // Shut down the program now
        }

        // Let's handle the failure
        std::cin.clear(); // Put us back in 'normal' operation mode
        ignoreLine();     // And remove the bad input

        return true;
    }

    return false;
}

void ignoreLine()
{
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
