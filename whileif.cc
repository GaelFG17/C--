#include <iostream>

int main() {
    int i = 0;

    // Bucle while que se ejecuta mientras i sea menor que 10
    while (i < 10) {
        // Condición if para verificar si i es par
        if (i % 2 == 0) {
            std::cout << i << " es par" << std::endl; // Imprime si i es par
        } else {
            std::cout << i << " es impar" << std::endl; // Imprime si i es impar
        }
        i++; // Incrementa i en 1
    }

    return 0;
}