#include <iostream>
#include <vector>
#include <string>
#include <queue>

int main() 
{
	std::vector <std::string> convidadosNoiva;
	std::vector <std::string> convidadosNoivo;

	int codigo, contadorNoiva = 0, contadorNoivo = 0;
	std::string convidadoNoiva, convidadoNoivo;

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
			sort(convidadosNoiva.begin(), convidadosNoiva.end());
			for (int i = 0; i < convidadosNoiva.size(); i++) 
			{
				std::cout << "\t" << convidadosNoiva[i] << std::endl;
			}
			std::cout << "" << std::endl;
			std::cout << "Lista de convidados do noivo:" << std::endl;
			sort(convidadosNoivo.begin(), convidadosNoivo.end());
			for (int i = 0; i < convidadosNoivo.size(); i++)
			{
				std::cout << "\t" << convidadosNoivo[i] << std::endl;
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
