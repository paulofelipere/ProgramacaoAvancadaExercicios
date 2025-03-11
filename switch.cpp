#include <iostream>

// ejemplo de 10/03/2025

int switcha() {
	int aritimetrica, geometrica, harmonica, ponderada;
	int x;
	std::cout << "Insira um numero para o valor de x: " << std::endl;
	std::cin >> x;

	int y;
	std::cout << "Insira um numero para o valor de y: " << std::endl;
	std::cin >> y;

	int z;
	std::cout << "Insira um numero para o valor de z: " << std::endl;
	std::cin >> z;

	int numOperacao;

	std::cout << "Digite o número da operação desejada: \n" << std::endl;
	std::cout << "Para '1' Média geometrica\n "
		"Para '2' Média Ponderada \n"
		"Para '3' Média Harmônica\n "
		"Para '4' Média Aritimétrica\n " << std::endl;
	std::cin >> numOperacao;

	switch (numOperacao) {
	case 1:
		geometrica = x * y * z;
		std::cout << "A média geometrica é: " << geometrica << std::endl;
		break;
	case 2:
		ponderada = ((x + 2) * y + 3 * z) / 6;
		std::cout << "A média ponderada é: " << ponderada << std::endl;
		break;
	case 3:
		harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));
		std::cout << "A média harmônica é: " << harmonica << std::endl;
		break;
	case 4:
		aritimetrica = (x + y + z) / 3;
		std::cout << "A média aritimétrca é: " << aritimetrica << std::endl;
	default:
		std::cout << "Opção inválida" << std::endl;
		break;
	}
	return 0;


}