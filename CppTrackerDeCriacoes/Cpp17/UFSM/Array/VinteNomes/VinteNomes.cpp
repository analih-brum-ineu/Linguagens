#include <iostream>
#include <string>

#define TAMANHO 20

int main()
{
	std::string array[TAMANHO];
	std::string nomeProcurado;
	int contador = 0;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o nome: "; std::getline(std::cin, array[i]);
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
	std::cout << "Informe o nome completo, ou em partes, que procura: "; std::getline(std::cin, nomeProcurado);
	bool encontrado = false;
	for (int i = 0; i < TAMANHO; i++)
	{
		if (array[i].find(nomeProcurado) != std::string::npos) 
		{
			std::cout << "Nome " << array[i] << " encontrado no array!" << std::endl;
			contador++;
		}
	}
	if (contador == 0)
	{
		std::cout << "Nenhum nome corresponde aos dados da pesquisa!" << std::endl;
	}
}
