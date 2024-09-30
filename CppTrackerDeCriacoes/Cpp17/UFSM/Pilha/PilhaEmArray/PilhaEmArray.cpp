#include <iostream>

#define TAMANHO 5

int main() 
{
	int pilha[TAMANHO];
	int topo = 0, codigo;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Insercao na pilha;" << std::endl;
	std::cout << "2 | Exibicao e remocao na pilha;" << std::endl;
	std::cout << "3 | Sair." << std::endl;

	do 
	{
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;
		if (codigo == 1) 
		{
			if (topo < TAMANHO)
			{
				std::cout << "Informe o numero a ser inserido: "; std::cin >> pilha[topo++];
			}
			else 
			{
				std::cout << "Pilha completa!" << std::endl;
			}
		}

		if (codigo == 2) 
		{
			if (topo > 0) 
			{
				std::cout << "Numero retirado: " << pilha[--topo] << std::endl;
			}
			else 
			{
				std::cout << "Pilha vazia!" << std::endl;
			}
		}

	} while (codigo != 3);
}
