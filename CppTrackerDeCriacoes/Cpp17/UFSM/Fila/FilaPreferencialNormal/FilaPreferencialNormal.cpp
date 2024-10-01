#include <iostream>
#include <queue>

int main() 
{
	std::queue <int> filaPreferencial;
	std::queue <int> filaNormal;

	int codigo, senhaPreferencial = 1, senhaNormal = 501;

	std::cout << "Menu:" << std::endl;
	std::cout << "1 | Dar entrada na fila preferencial;" << std::endl;
	std::cout << "2 | Dar entrada na fila normal;" << std::endl;
	std::cout << "3 | Chamada do proximo;" << std::endl;
	std::cout << "4 | Sair." << std::endl;

	do 
	{
		std::cout << "Informe o codigo da acao: "; std::cin >> codigo;

		if (codigo == 1)
		{
			if (senhaPreferencial >= 1 && senhaPreferencial < 501)
			{
				std::cout << "Voce acabou de dar entrada em uma fila preferencial. Sua senha e " << senhaPreferencial << ". Por favor, mantenha-se atento a chamada!" << std::endl;
				filaPreferencial.push(senhaPreferencial++);
			}
		}

		if (codigo == 2)
		{
			if (senhaNormal >= 501)
			{
				std::cout << "Voce acabou de dar entrada em uma fila normal. Sua senha e " << senhaNormal << ". Por favor, mantenha-se atento a chamada!" << std::endl;
				filaNormal.push(senhaNormal++);
			}
		}

		if (codigo == 3) 
		{
			if (!filaPreferencial.empty()) 
			{
				std::cout << "Senha: " << filaPreferencial.front() << std::endl;
				filaPreferencial.pop();
			}
			else if (filaPreferencial.empty() && !filaNormal.empty()) 
			{
				std::cout << "Senha: " << filaNormal.front() << std::endl;
				filaNormal.pop();
			}
			else 
			{
				std::cout << "As filas encontram-se vazias!" << std::endl;
			}
		}

	} while (codigo != 4);
}
