#pragma once
#include <string_view>
#include "bodies.h"
// Para main
namespace dialogs
{
    void menuDisplay(int &opcion);

    void askUserForPlanet(bodies::Planet &planet);
    void askUserForObject(bodies::Object &object);

    void showResult(std::string_view textResult, double resultNumber, std::string_view unit);

    // Para capturar excepciones en caso de insertar valores erroneos en el input (learncpp)
    bool clearFailedExtraction();
    void ignoreLine();
}

namespace literals
{

    constexpr int opcionUnoInt{1};
    constexpr int opcionDosInt{2};
    constexpr int opcionTresInt{3};
    constexpr int opcionCuatroInt{4};
    constexpr int opcionCincoInt{5};
    constexpr int opcionSeisInt{6};

    constexpr std::string_view appTitleSV{"=== MODELO DE FISICA SIMPLE ==="};

    constexpr std::string_view optionOneSV{"1. Calcular fuerza gravitatoria"};
    constexpr std::string_view optoionTwoSV{"2. Calcular aceleración gravitatoria"};
    constexpr std::string_view optionThreeSV{"3. Calcular velocidad de escape"};
    constexpr std::string_view optionFourSV{"4. Salir"};

    constexpr std::string_view optionSelectSV{"Seleccione una opción: "};

    constexpr std::string_view planetSelectionTitleSV{"Con qué planeta quieres trabajar?\n"};
    constexpr std::string_view earthOptionSV{"1: La tierra\n"};
    constexpr std::string_view jupiterOptionSV{"2: Júpiter\n"};
    constexpr std::string_view customPlanetOptionSV{"3: Proximamente podras crear tu planeta...\n"};

    constexpr std::string_view heightSelectionTitleSV{"A qué altura está el objeto sobre el planeta? (m)\n"};
    constexpr std::string_view objectMassSelectionTitleSV{"Cuál es la masa del objeto? (Kg)\n"};

    constexpr std::string_view errorInputSV{"Opción no válida."};
    constexpr std::string_view goodbyeSV{"Sayonara baby"};

    constexpr std::string_view gravitationalForceResult{"La fuerza gravitacional es de: "};
    constexpr std::string_view gravitationalAccelerationResult{"La aceleracion gravitatoria es de: "};
    constexpr std::string_view escapeVelocityResult{"La velocidad de escape es de: "};
    constexpr std::string_view orbitalSpeedResult{"La velocidad de órbita es de: "};
    constexpr std::string_view orbitalPeriodResult{"El periodo de órbita es de: "};
    constexpr std::string_view invalidValue{"El valor introducido no es válido. Inténtalo de nuevo.\n"};

}
