cmake_minimum_required(VERSION 3.27)
project(Programacion_II)

set(CMAKE_CXX_STANDARD 14)

add_executable(Programacion_II
        "Guia 1/1-polinomio.cpp"
        "Guia 1/2-factorial.cpp"
        "Guia 1/3-vector.cpp"
        "Guia 1/4-matriz.cpp"
        "Guia 1/Asistencia-18-03.cpp"
        "Guia 1/burbujaMejorada.cpp"
        Teorico/ejemplo1.cpp
        cmake-build-debug/pruebaenclion.cpp)
