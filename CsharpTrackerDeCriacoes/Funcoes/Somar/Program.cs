using System;

namespace Soma
{
    internal class Program
    {
        public static double Somar(double primeiroNumero, double segundoNumero)
        {
            double soma = primeiroNumero + segundoNumero;
            return soma;
        }
        static void Main(string[] args)
        {
            Console.Write("O resultado da soma é igual a ");
            Console.WriteLine(Somar(5.0, 5.0));

            Console.ReadKey();
        }
    }
}
