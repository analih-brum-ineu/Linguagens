#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	std::vector <int> vector;
	int numero, numeroProcurado;

	do 
	{
		std::cout << "Informe um numero: "; std::cin >> numero; vector.push_back(numero);
	} while (numero != 0);

	std::cout << "" << std::endl;
	std::cout << "Vetor: " << std::endl;
	sort(vector.begin(), vector.end());
	for (int i = 0; i < vector.size(); i++)
	{
		std::cout << '\t' << vector[i] << std::endl;
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
