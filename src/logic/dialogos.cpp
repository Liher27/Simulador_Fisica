#include "dialogos.h"
#include "calculos.h"
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

namespace dialogs
{
    void menuDisplay(int &opcion)
    {
        while (true)
        {

            if (!clearFailedExtraction())
            {
                std::cout << "\n"
                          << literals::appTitleSV << "\n";

                std::cout << literals::optionOneSV << "\n";
                std::cout << literals::optoionTwoSV << "\n";
                std::cout << literals::optionThreeSV << "\n";
                std::cout << literals::optionFourSV << "\n";

                std::cin >> opcion;

                if (clearFailedExtraction())
                {
                    std::cout << literals::errorInputSV << "\n";
                    continue;
                }

                if (opcion >= 1 && opcion <= 4)
                    break;

                std::cout << literals::errorInputSV << '\n';
            }
        }
    }

    void askUserForPlanet(bodies::Planet &planet)
    {
        int operation{};
        while (true)
        {
            std::cout << literals::planetSelectionTitleSV;

            std::cout << literals::earthOptionSV;
            std::cout << literals::jupiterOptionSV;
            /*std::cout << literales::customPlanetOptionSV;*/

            std::cin >> operation;

            if (clearFailedExtraction())
                continue;

            if (operation >= 1 && operation <= 2)
            {
                double planetMass{operation == 1 ? numericConstants::earthMass : numericConstants::jupiterMass};
                double planetRadius{operation == 1 ? numericConstants::earthRadius : numericConstants::jupiterRadius};

                planet.planetMass = planetMass;
                planet.planetRadius = planetRadius;
                break;
            }

            std::cout << literals::errorInputSV << '\n';
        }
    }

    double askForValidPositiveValue(std::string_view message)
    {
        double value{};

        while (true)
        {
            std::cout << message;
            std::cin >> value;

            if (clearFailedExtraction() || !std::isfinite(value) ||
                value < 0)
            {
                std::cout << literals::invalidValue;
                continue;
            }

            return value;
        }
    }
    void askUserForObject(bodies::Object &object)
    {
        object.objectMass = askForValidPositiveValue(
            literals::objectMassSelectionTitleSV);

        object.objectHeight = askForValidPositiveValue(
            literals::heightSelectionTitleSV);
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

    void showResult(std::string_view resultText, double resultNumber, std::string_view unit)
    {
        std::cout << resultText << std::setprecision(2) << std::scientific << resultNumber << unit;
    }
}
