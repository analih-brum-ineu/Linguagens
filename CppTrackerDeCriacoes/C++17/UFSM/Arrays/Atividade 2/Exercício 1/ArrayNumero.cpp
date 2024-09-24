#include <iostream>

#define TAMANHO 20

int main()
{
	int numero[TAMANHO];
	int pesquisa, contador = 0;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o numero: "; std::cin >> numero[i];
	}

	for (int i = 0; i < TAMANHO - 1; i++)
	{
		for (int j = i + 1; j < TAMANHO; j++)
		{
			if (numero[i] > numero[j])
			{
				std::swap(numero[i], numero[j]);
			}
		}
	}

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << numero[i] << std::endl;
	}

	std::cout << "Informe o numero que procura: "; std::cin >> pesquisa;
	for (int i = 0; i < TAMANHO; i++)
	{
		if (numero[i] == pesquisa) { std::cout << "Numero encontrado: " << numero[i] << std::endl; contador++; }
	}
	if (contador == 0) { std::cout << "Numero nao encontrado!" << std::endl; }

	return 0;
}
