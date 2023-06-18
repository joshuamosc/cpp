# CMakeList.txt: proyecto de CMake para BusquedaBinaria, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (BusquedaBinaria "BusquedaBinaria.cpp" "BusquedaBinaria.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET BusquedaBinaria PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
