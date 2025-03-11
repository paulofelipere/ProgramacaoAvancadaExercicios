#include <iostream>


// ejemplo 2
int primos() {

	int soma = 0;
	int numero;

	for (int i = 0; i < 150; i++) {
		std::cout << "Digite um número: " << std::endl;
		std::cin >> numero;

		if (numero % 3 == 0) {
			soma += numero;
		}
	}
	std::cout << "A soma dos numeros é: " << soma << std::endl;
	return 0;
}



