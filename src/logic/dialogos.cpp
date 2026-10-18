#include "dialogos.h"
#include <iostream>
#include <limits>
#include <cmath>
#include <iomanip>

namespace dialogs
{
    int menuDisplay()
    {
        int operation{};
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

                std::cin >> operation;

                if (clearFailedExtraction())
                    continue;

                if (operation >= 1 && operation <= 4)
                    break;

                std::cout << literals::errorInputSV << '\n';
            }
        }

        return operation;
    }

    int askForPlanet()
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
                break;

            std::cout << literals::errorInputSV << '\n';
        }

        return operation;
    }

    double askForHeight()
    {
        double height{};
        while (true)
        {

            std::cout << literals::heightSelectionTitleSV;

            std::cin >> height;
            if (!clearFailedExtraction() && std::isfinite(height) && height >= 0.0)
            {
                break;
            }

            else
            {
                std::cout << literals::invalidValue;
            }
        }

        return height;
    }

    double askForObjectMass()
    {
        double mass{};
        while (true)
        {

            std::cout << literals::objectMassSelectionTitleSV;

            std::cin >> mass;
            if (!clearFailedExtraction() && std::isfinite(mass) && mass >= 0.0)
            {
                break;
            }
            else
            {
                std::cout << literals::invalidValue;
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

    void showResult(std::string_view resultText, double resultNumber, std::string_view unit)
    {
        std::cout << resultText << std::setprecision(2) << std::scientific << resultNumber << unit;
    }
}
