using System;
using System.Globalization;

namespace QuocienteResto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe o dividendo: ");
            double dividendo = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.Write("Informe o divisor: ");
            double divisor = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            double divisao = dividendo / divisor;
            double resto = (int) dividendo % divisor;

            Console.WriteLine("O resultado da divisão de " + dividendo + " dividido por " + divisor + " é " + divisao.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("O resto da divisão de " + dividendo + " dividido por " + divisor + " é " + resto);
        }
    }
}
