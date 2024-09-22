using System;
using System.Globalization;

namespace AreaDoTriangulo
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe a área da base: ");
            double AreaDaBase = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            Console.Write("Informe a altura: ");
            double Altura = double.Parse(Console.ReadLine(), CultureInfo.InvariantCulture);

            double AreaDoTriangulo = (AreaDaBase * Altura) / 2.0;

            Console.WriteLine("Área do Triângulo = " + AreaDoTriangulo.ToString("F2", CultureInfo.InvariantCulture) + " km/m/cm^2");
            Console.ReadLine();
        }
    }
}
