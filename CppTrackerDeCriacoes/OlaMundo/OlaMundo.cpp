#include <iostream>
#include <locale>
#include <codecvt>

int main() 
{
	std::locale::global(std::locale("Portuguese_Brazil.1252"));
	std::wcout.imbue(std::locale(""));

	std::wcout << L"Olá, mundo!" << std::endl;
	system("PAUSE");
	return 0;
}
