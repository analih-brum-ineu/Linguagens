#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::vector <std::string> vetor;
	int codigo, posicao;
	std::string nome;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Inserir nome;" << std::endl;
	std::cout << "2 | Remover nome;" << std::endl;
	std::cout << "3 | Listagem em ordem alfabetica;" << std::endl;
	std::cout << "4 | Sair." << std::endl;

	do
	{
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;

		if (codigo == 1)
		{
			std::cin.ignore();
			std::cout << "Informe um nome: "; std::getline(std::cin, nome); vetor.push_back(nome);
		}

		if (codigo == 2)
		{
			std::cout << "Informe a posicao do nome a ser removido: "; std::cin >> posicao;
			if (posicao >= 0 && posicao < vetor.size())
			{
				vetor.erase(vetor.begin() + posicao);
				std::cout << "Nome removido com sucesso!" << std::endl;
			}
			else { std::cout << "A posicao informada e invalida!" << std::endl; }
		}

		if (codigo == 3)
		{
			sort(vetor.begin(), vetor.end());
			for (int i = 0; i < vetor.size(); i++)
			{
				std::cout << "\t" << i << " | " << vetor[i] << std::endl;
			}
		}
	} while (codigo != 4);
}
