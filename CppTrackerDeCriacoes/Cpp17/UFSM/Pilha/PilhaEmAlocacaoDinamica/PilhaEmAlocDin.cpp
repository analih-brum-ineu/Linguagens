#include <iostream>
#include <stack>

int main() 
{
	struct pilha { int informacao; pilha* anterior; };
	pilha *topo = NULL;

	int codigo, elemento;
	
	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Insercao na pilha;" << std::endl;
	std::cout << "2 | Exibicao e remocao na pilha;" << std::endl;
	std::cout << "3 | Sair." << std::endl;

	do 
	{
		pilha *p;
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;

		if (codigo == 1) 
		{
			std::cout << "Informe o numero a ser inserido: "; std::cin >> elemento;
			p = new pilha;
			p->informacao = elemento;
			p->anterior = topo;
			topo = p;
		}

		if (codigo == 2) 
		{
			if (topo != NULL) 
			{
				pilha *auxiliar;
				std::cout << "Numero retirado: "<<topo->informacao<<std::endl;
				auxiliar = topo->anterior;
				delete topo;
				topo = auxiliar;
			}
			else 
			{
				std::cout << "Pilha vazia!" << std::endl;
			}
		}

	} while (codigo != 3);
}
