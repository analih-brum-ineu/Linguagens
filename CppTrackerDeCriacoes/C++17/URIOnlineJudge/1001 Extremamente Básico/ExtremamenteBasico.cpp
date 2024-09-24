#include <iostream>
#include <locale>

int main() 
{
	std::locale::global(std::locale("Portuguese_Brazil.1252"));
	std::wcout.imbue(std::locale(""));

	int a, b;
	
	std::wcout << L"Informe o 1º número: "; std::cin >> a;
	std::wcout << L"Informe o 2º número: "; std::cin >> b;

	int soma = a + b;

	std::wcout << L"O resultado de " << a << " + " << b << " é igual a " << soma << std::endl;
	return 0;
}
