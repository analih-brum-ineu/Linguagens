#include <iostream>

#define TAMANHO 5

int main() 
{
	int array[TAMANHO];
	int numeroProcurado, contador = 0;

	for (int i = 0; i < TAMANHO; i++) 
	{
		std::cout << "Informe o " << i + 1 << ".o numero: "; std::cin >> array[i];
	}

	for (int i = 0; i < TAMANHO - 1; i++) 
	{
		for (int j = i + 1; j < TAMANHO; j++) 
		{
			if (array[i] > array[j]) 
			{
				std::swap(array[i], array[j]);
			}
		}
	}

	std::cout << "" << std::endl;
	std::cout << "Array: " << std::endl;
	for (int i = 0; i < TAMANHO; i++) 
	{
		std::cout << "\t" << array[i] << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o numero que procura: "; std::cin >> numeroProcurado;
	for (int i = 0; i < TAMANHO; i++) 
	{
		if (numeroProcurado == array[i]) 
		{
			std::cout << "Numero " << numeroProcurado << " encontrado no array!" << std::endl;
			contador++;
		}
	}
	if (contador == 0) 
	{
		std::cout << "Numero nao encontrado!" << std::endl;
	}
}
