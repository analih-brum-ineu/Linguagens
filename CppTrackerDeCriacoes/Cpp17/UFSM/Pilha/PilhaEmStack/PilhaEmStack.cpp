#include <iostream>
#include <stack>

int main() 
{
	std::stack <int> pilha;
	int codigo, elemento;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Insercao na pilha;" << std::endl;
	std::cout << "2 | Exibicao e remocao na pilha;" << std::endl;
	std::cout << "3 | Sair." << std::endl;

	do 
	{
		std::cout << "Informe o numero da acao: "; std::cin >> codigo;

		if (codigo == 1) 
		{
			std::cout << "Informe o numero a ser inserido: "; std::cin >> elemento; pilha.push(elemento);
		}

		if (codigo == 2) 
		{
			if (!pilha.empty()) 
			{
				std::cout << "Numero retirado: " << pilha.top() << std::endl;
				pilha.pop();
			}
			else 
			{
				std::cout << "Pilha vazia!" << std::endl;
			}
		}
	} while (codigo != 3);
}
