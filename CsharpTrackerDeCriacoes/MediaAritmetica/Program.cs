using System;
using System.Globalization;

namespace MediaAritmetica
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe a quantia de números: ");
            int Quantia = Int32.Parse(Console.ReadLine());

            double Soma = 0.0;

            for (int i = 0; i < Quantia; i++)
            {
                Console.Write("Informe o " + (i + 1) + "º número: ");
                double Numero = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);
                Soma += Numero;
            }

            double MediaAritmetica = Soma / Quantia;

            Console.WriteLine("A soma total dos números informados é igual a " + Soma.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("A média aritmética dos números informados é igual a " + MediaAritmetica.ToString("F2", CultureInfo.InvariantCulture));
            Console.ReadLine();
        }
    }
}
