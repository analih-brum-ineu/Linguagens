#include <iostream>
#include <vector>
#include <algorithm>

#define TAMANHO 20

int main() 
{
	std::vector <int> vector;
	int numero, numeroProcurado;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o numero : "; std::cin >> numero; vector.push_back(numero);
	}
	
	std::cout << "" << std::endl;
	std::cout << "Vector: " << std::endl;
	sort(vector.begin(), vector.end());
	for (int i = 0; i < TAMANHO; i++) {
		std::cout << '\t' << vector[i] <<std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o numero que procura: "; std::cin >> numeroProcurado;
	if (find(vector.begin(), vector.end(), numeroProcurado) != vector.end()) 
	{
		std::cout << "Numero " << numeroProcurado << " encontrado no vector!" << std::endl;
	}
	else 
	{
		std::cout << "Numero nao encontrado!" << std::endl;
	}
}
