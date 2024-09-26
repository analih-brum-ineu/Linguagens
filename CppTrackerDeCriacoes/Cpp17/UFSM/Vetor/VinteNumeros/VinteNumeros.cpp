#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

#define TAMANHO 20

int main() 
{
	std::vector <int> vetor;
	int numero, numeroProcurado;

	for (int i = 0; i < TAMANHO; i++)
	{
		std::cout << "Informe o " << i + 1 << ".o numero : "; std::cin >> numero; vetor.push_back(numero);
	}
	
	std::cout << "" << std::endl;
	std::cout << "Vetor: " << std::endl;
	sort(vetor.begin(), vetor.end());
	for (int i = 0; i < TAMANHO; i++) {
		std::cout << '\t' << vetor[i] <<std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o numero que procura: "; std::cin >> numeroProcurado;
	if (find(vetor.begin(), vetor.end(), numeroProcurado) != vetor.end()) 
	{
		std::cout << "Numero " << numeroProcurado << " encontrado no array!" << std::endl;
	}
	else 
	{
		std::cout << "Numero nao encontrado!" << std::endl;
	}
}
