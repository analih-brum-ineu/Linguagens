using System;
using System.Globalization;

namespace MediaAritmetica
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe a quantia de números: ");
            int quantia = Int32.Parse(Console.ReadLine());

            double soma = 0.0;

            for (int i = 0; i < quantia; i++)
            {
                Console.Write("Informe o " + (i + 1) + "º número: ");
                double numero = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                soma += numero;
            }

            double mediaAritmetica = soma / quantia;

            Console.WriteLine("A soma total dos números informados é igual a " + soma.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("A média aritmética dos números informados é igual a " + mediaAritmetica.ToString("F2", CultureInfo.InvariantCulture));
            Console.ReadLine();
        }
    }
}
