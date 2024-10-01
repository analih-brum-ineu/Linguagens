#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

#define TAMANHO 20

int main() 
{
	std::vector <std::string> vector;
	std::string nome, nomeProcurado;
	int contador = 0;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o nome : "; std::getline(std::cin, nome); vector.push_back(nome);
	}

	std::cout << "" << std::endl;
	std::cout << "Vector: " << std::endl;
	sort(vector.begin(), vector.end());
	for (int i = 0; i < TAMANHO; i++) 
	{
		std::cout << '\t' << vector[i] << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o nome completo, ou em partes, que procura: "; std::getline(std::cin, nomeProcurado);
	bool encontrado = false;
	for (int i = 0; i < TAMANHO; i++)
	{
		if (vector[i].find(nomeProcurado) != std::string::npos)
		{
			std::cout << "Nome " << vector[i] << " encontrado no vector!" << std::endl;
			contador++;
		}
	}
	if (contador == 0)
	{
		std::cout << "Nenhum nome corresponde aos dados da pesquisa!" << std::endl;
	}
}
