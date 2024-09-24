#include <iostream>
#include <locale>
#include <cmath>
#include <iomanip>

int main()
{
    std::locale::global(std::locale("Portuguese_Brazil.1252"));
    std::wcout.imbue(std::locale(""));

    const double pi = 3.14159;
   double raio;

    std::wcout << L"Informe o raio do círculo (Atenção: Informe números com ponto no lugar de vírgula): "; std::cin >> raio;

    double areaDoCirculo = pi * pow(raio, 2);

    std::wcout << L"A área do círculo é igual a " << std::fixed << std::setprecision(2) << areaDoCirculo << L" km/m/cm^2" << std::endl;

    return 0;
}
