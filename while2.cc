#include <iostream>

int main() {
    int number;
    std::cout << "Introduce un número (0 para salir): ";
    std::cin >> number;

    // Ejemplo de bucle while
    while (number != 0) {
        std::cout << "Has introducido: " << number << std::endl;
        std::cout << "Introduce otro número (0 para salir): ";
        std::cin >> number;
    }

    std::cout << "Has salido del bucle." << std::endl;
    return 0;
}