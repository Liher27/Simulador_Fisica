#pragma once
#include <string>

namespace bodies
{
    struct Planet
    {
        double planetRadius{};
        double planetMass{};
        std::string planetName{};
    };

    struct Object
    {
        double objectMass{};
        double objectHeight{};
        std::string objectName{};
    };
}
