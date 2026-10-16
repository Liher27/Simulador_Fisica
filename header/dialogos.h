#ifndef HEADER_DIALOGOS
#define HEADER_DIALOGOS
#include <string_view>

//Para main
int pintarMenu();

int pedirPlaneta();
float askForHeight();
int askForObjectMass();

//Para capturar excepciones en caso de insertar valores erroneos en el input (learncpp)
bool clearFailedExtraction();
void ignoreLine();


using SV = std::string_view;

namespace literales {

constexpr SV tituloAppSV{"=== MODELO DE FISICA SIMPLE ==="};

constexpr SV opcionUnoSV{"1. Calcular fuerza gravitatoria"};
constexpr SV opcionDosSV{"2. Calcular aceleración gravitatoria"};
constexpr SV opcionTresSV{"3. Calcular velocidad de escape"};
constexpr SV opcionCuatroSV{"4. Salir"};

constexpr SV seleccionarOpcionSV{"Seleccione una opción: "};

constexpr SV planetSelectionTitleSV{"Con qué planeta quieres trabajar?\n"};
constexpr SV earthOptionSV{"1: La tierra\n"};
constexpr SV jupiterOptionSV{"2: Júpiter\n"};
constexpr SV customPlanetOptionSV{"3: Proximamente podras crear tu planeta...\n"};

constexpr SV heightSelectionTitleSV{"A qué altura está el objeto sobre el planeta? (m)\n"};
constexpr SV objectMassSelectionTitleSV{"Cuál es la masa del objeto? (Kg)\n"};


constexpr SV errorInputSV{"Opción no válida."};
constexpr SV despedidaSV{"Sayonara baby"};

constexpr SV gravitationalForceResult{"La fuerza gravitacional es de: "};
constexpr SV gravitationalAccelerationResult{"La aceleracion gravitatoria es de: "};
constexpr SV escapeVelocityResult{"La velocidad de escape es de: "};
constexpr SV invalidValue{"El valor introducido no es válido. Inténtalo de nuevo.\n"};


}


#endif
