using System;
using System.Globalization;

namespace AreaDoTriangulo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe a área da base: ");
            double areaDaBase = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.Write("Informe a altura: ");
            double altura = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            double areaDoTriangulo = (areaDaBase * altura) / 2.0;

            Console.WriteLine("Área do Triângulo = " + areaDoTriangulo.ToString("F2", CultureInfo.InvariantCulture) + " km/m/cm^2");
            Console.ReadLine();
        }
    }
}
