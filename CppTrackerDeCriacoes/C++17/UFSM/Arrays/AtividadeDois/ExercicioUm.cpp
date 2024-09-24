#include <iostream>

#define TAMANHO 5

int main()
{
	int a[TAMANHO];
	int pesquisa, contador = 0;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o numero: "; std::cin >> a[i];
	}

	for (int i = 0; i < TAMANHO - 1; i++)
	{
		for (int j = i + 1; j < TAMANHO; j++)
		{
			if (a[i] > a[j])
			{
				std::swap(a[i], a[j]);
			}
		}
	}

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << a[i] << std::endl;
	}

	std::cout << "Informe o numero que procura: "; std::cin >> pesquisa;
	for (int i = 0; i < TAMANHO; i++)
	{
		if (a[i] == pesquisa) { std::cout << "Numero encontrado: " << a[i] << std::endl; contador++; }
	}
	if (contador == 0) { std::cout << "Numero nao encontrado!" << std::endl; }

	return 0;
}
