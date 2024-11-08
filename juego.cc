#include <iostream>
#include <cstdlib>
#include <ctime>

void jugar() {
    int numeroAleatorio = std::rand() % 100 + 1;
    int intento;
    int intentos = 0;

    std::cout << "Adivina el número entre 1 y 100: ";

    do {
        std::cin >> intento;
        intentos++;

        if (intento > numeroAleatorio) {
            std::cout << "¡Demasiado alto! Intenta de nuevo: ";
        } else if (intento < numeroAleatorio) {
            std::cout << "¡Demasiado bajo! Intenta de nuevo: ";