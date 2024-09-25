#include <iostream>
#include <list>
#include <string>
#include <queue>

int main()
{
	std::list <std::string> lista;
	int codigo;
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
			std::cout << "Informe um nome: "; std::getline(std::cin, nome); lista.push_back(nome);
		}

		if (codigo == 2) 
		{
			std::cin.ignore();
			std::cout << "Informe o nome a ser removido: "; std::getline(std::cin, nome);
			if (find(lista.begin(), lista.end(), nome) != lista.end()) 
			{
				lista.erase(find(lista.begin(), lista.end(), nome));
			}
			else 
			{
				std::cout << "Não foi possivel remover este nome! Nome nao encontrado." << std::endl;
			}
		}

		if (codigo == 3) 
		{
			lista.sort();
			for (std::string el : lista) 
			{
				std::cout << el << std::endl;
			}
		}

	} while (codigo != 4);
}
