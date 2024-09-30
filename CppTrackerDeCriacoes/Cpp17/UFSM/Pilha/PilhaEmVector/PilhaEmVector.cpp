#include <iostream>
#include <vector>

int main()
{
	std::vector <int> pilha;
	int codigo, elemento;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Insercao na pilha;" << std::endl;
	std::cout << "2 | Exibicao e remocao na pilha;" << std::endl;
	std::cout << "3 | Sair." << std::endl;

	do
	{
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;
		if (codigo == 1)
		{
			std::cout << "Informe o numero a ser inserido: "; std::cin >> elemento; pilha.push_back(elemento);
		}

		if (codigo == 2) 
		{
			if (pilha.size() > 0)
			{
				std::cout << "Numero retirado: " << pilha.back() << std::endl;
				pilha.erase(pilha.end() - 1);
			}
			else 
			{
				std::cout << "Pilha vazia!" << std::endl;
			}
		}

	} while (codigo != 3);
}
