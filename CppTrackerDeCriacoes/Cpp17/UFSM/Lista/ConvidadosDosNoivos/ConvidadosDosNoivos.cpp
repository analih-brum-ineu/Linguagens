#include <iostream>
#include <list>
#include <string>
#include <queue>

int main()
{
	std::list <std::string> convidadosNoiva;
	std::list <std::string> convidadosNoivo;

	int codigo, contadorNoiva = 0, contadorNoivo = 0;
	std::string convidadoNoiva, convidadoNoivo;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Inserir convidado da noiva;" << std::endl;
	std::cout << "2 | Inserir convidado do noivo;" << std::endl;
	std::cout << "3 | Visualizacao das listas;" << std::endl;
	std::cout << "4 | Contabilizacao das listas;" << std::endl;
	std::cout << "5 | Sair." << std::endl;

	do 
	{
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;

		if (codigo == 1) 
		{
			std::cin.ignore();
			std::cout << "Informe o nome de um convidado da noiva: "; std::getline(std::cin, convidadoNoiva); convidadosNoiva.push_back(convidadoNoiva);
			contadorNoiva++;
		}

		if (codigo == 2)
		{
			std::cin.ignore();
			std::cout << "Informe o nome de um convidado do noivo: "; std::getline(std::cin, convidadoNoivo); convidadosNoivo.push_back(convidadoNoivo);
			contadorNoivo++;
		}

		if (codigo == 3)
		{
			std::cout << "Lista de convidados da noiva:" << std::endl;
			convidadosNoiva.sort();
			for (std::string el : convidadosNoiva) 
			{
				std::cout << el << std::endl;
			}
			std::cout << "" << std::endl;
			std::cout << "Lista de convidados do noivo:" << std::endl;
			convidadosNoivo.sort();
			for (std::string el : convidadosNoivo)
			{
				std::cout << el << std::endl;
			}
		}
		if (codigo == 4) 
		{
			int total = contadorNoiva + contadorNoivo;
			std::cout << "Numero total de convidados: " << total << std::endl;
			if (contadorNoiva > contadorNoivo) 
			{
				int diferenca = contadorNoiva - contadorNoivo;
				std::cout << "A lista de convidados da noiva e a maior com " << diferenca << " convidado(s) a mais que a do noivo." << std::endl;
			}
			else if (contadorNoiva < contadorNoivo) 
			{
				int diferenca = contadorNoivo - contadorNoiva;
				std::cout << "A lista de convidados do noivo e a maior com " << diferenca << " convidado(s) a mais que a da noiva." << std::endl;
			}
			else { std::cout << "A lista do noivo e da noiva possuem a mesma quantia de convidados." << std::endl; }
		}
	} while (codigo != 5);
}
