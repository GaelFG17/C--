#include <iostream>

int main() {
    int num;
    std::cout << "Ingrese un número: ";
    std::cin >> num;

    std::cout << "Tabla de multiplicar del " << num << ":\n";
    for (int i = 1; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << num * i << "\n";
    }

    return 0;
}