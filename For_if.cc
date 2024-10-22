#include <iostream>

int main() {
    for (int i = 1; i <= 10; ++i) {
        if (i % 2 == 0) {
            std::cout << i << " es par" << std::endl;
        } else {
            std::cout << i << " es impar" << std::endl;
        }
    }
    return 0;
}