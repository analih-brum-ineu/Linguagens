using System;
using System.Globalization;

namespace QuocienteResto
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe o dividendo: ");
            double Dividendo = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.Write("Informe o divisor: ");
            double Divisor = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            double Divisao = Dividendo / Divisor;
            double Resto = (int)Dividendo % Divisor;

            Console.WriteLine("O resultado da divisão de " + Dividendo + " dividido por " + Divisor + " é " + Divisao.ToString("F2", CultureInfo.InvariantCulture));
            Console.WriteLine("O resto da divisão de " + Dividendo + " dividido por " + Divisor + " é " + Resto);
        }
    }
}
