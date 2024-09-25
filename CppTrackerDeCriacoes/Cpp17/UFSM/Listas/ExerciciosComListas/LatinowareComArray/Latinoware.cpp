#include <iostream>
#include <string>

#define TAMANHO 60

int main()
{
	std::string array[TAMANHO];
	int codigo, posicao, contador = 0;

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
			std::cout << "Informe um nome: "; std::getline(std::cin, array[contador++]);
		}

		if (codigo == 2)
		{
			std::cout << "Informe a posicao do nome a ser removido: "; std::cin >> posicao;
			if (posicao >= 0 && posicao < contador) 
			{
				for (int i = posicao; i < contador - 1; i++) 
				{
					array[i] = array[i + 1];
				}
				contador--;
				std::cout << "Nome removido com sucesso!" << std::endl;
			}
			else 
			{
				std::cout << "A posicao informada e invalida!" << std::endl;
			}
		}

		if (codigo == 3)
		{
			for (int i = 0; i < contador - 1; i ++) 
			{
				for (int j = i + 1; i < contador; i++) 
				{
					std::swap(array[i], array[j]);
				}
			}
			for (int i = 0; i < contador; i++) 
			{
				std::cout << "\t" << i << " | " << array[i] << std::endl;
			}
		}

	} while (codigo != 4);
}
