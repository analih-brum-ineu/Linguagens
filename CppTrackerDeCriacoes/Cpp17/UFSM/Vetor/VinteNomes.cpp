#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>

#define TAMANHO 20

int main() 
{
	std::vector <std::string> vetor;
	std::string nome, nomeProcurado;
	int contador = 0;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o nome : "; std::getline(std::cin, nome); vetor.push_back(nome);
	}

	std::cout << "" << std::endl;
	std::cout << "Vetor: " << std::endl;
	sort(vetor.begin(), vetor.end());
	for (int i = 0; i < TAMANHO; i++) 
	{
		std::cout << '\t' << vetor[i] << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o nome completo, ou em partes, que procura: "; std::getline(std::cin, nomeProcurado);
	bool encontrado = false;
	for (int i = 0; i < TAMANHO; i++)
	{
		if (vetor[i].find(nomeProcurado) != std::string::npos)
		{
			std::cout << "Nome " << vetor[i] << " encontrado no vetor!" << std::endl;
			contador++;
		}
	}
	if (contador == 0)
	{
		std::cout << "Nenhum nome corresponde aos dados da pesquisa!" << std::endl;
	}
}