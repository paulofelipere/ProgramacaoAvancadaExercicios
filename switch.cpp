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

	std::cout << "Digite o n�mero da opera��o desejada: \n" << std::endl;
	std::cout << "Para '1' M�dia geometrica\n "
		"Para '2' M�dia Ponderada \n"
		"Para '3' M�dia Harm�nica\n "
		"Para '4' M�dia Aritim�trica\n " << std::endl;
	std::cin >> numOperacao;

	switch (numOperacao) {
	case 1:
		geometrica = x * y * z;
		std::cout << "A m�dia geometrica �: " << geometrica << std::endl;
		break;
	case 2:
		ponderada = ((x + 2) * y + 3 * z) / 6;
		std::cout << "A m�dia ponderada �: " << ponderada << std::endl;
		break;
	case 3:
		harmonica = 1 / ((1 / x) + (1 / y) + (1 / z));
		std::cout << "A m�dia harm�nica �: " << harmonica << std::endl;
		break;
	case 4:
		aritimetrica = (x + y + z) / 3;
		std::cout << "A m�dia aritim�trca �: " << aritimetrica << std::endl;
	default:
		std::cout << "Op��o inv�lida" << std::endl;
		break;
	}
	return 0;


}