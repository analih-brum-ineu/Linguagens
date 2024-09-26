#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	std::vector <int> vetor;
	int numero, numeroProcurado;

	do 
	{
		std::cout << "Informe um numero: "; std::cin >> numero; vetor.push_back(numero);
	} while (numero != 0);

	std::cout << "" << std::endl;
	std::cout << "Vetor: " << std::endl;
	sort(vetor.begin(), vetor.end());
	for (int i = 0; i < vetor.size(); i++)
	{
		std::cout << '\t' << vetor[i] << std::endl;
	}

	std::cout << "" << std::endl;
	std::cout << "Informe o numero que procura: "; std::cin >> numeroProcurado;
	if (find(vetor.begin(), vetor.end(), numeroProcurado) != vetor.end())
	{
		std::cout << "Numero " << numeroProcurado << " encontrado no vetor!" << std::endl;
	}
	else
	{
		std::cout << "Numero nao encontrado!" << std::endl;
	}
}