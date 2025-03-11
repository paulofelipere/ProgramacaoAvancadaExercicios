#include <iostream>
#include <cmath>

bool ePrimo(int numero) {
    if (numero <= 1) return false;
    if (numero == 2) return true;
    if (numero % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(numero); i += 2) {
        if (numero % i == 0) return false;
    }
    return true;
}

int primos1() {
    int soma = 0;

    for (int i = 200; i <= 300; i++) {
        if (ePrimo(i)) {
            std::cout << i << " é primo" << std::endl;
            soma += i;
        }
    }
    std::cout << "A soma dos números primos entre 200 e 300 é: " << soma << std::endl;
    return 0;
}

int main() {
    primos1();
    return 0;
}