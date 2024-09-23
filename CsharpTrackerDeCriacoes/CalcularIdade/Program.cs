using System;

namespace CalcularIdade
{
    internal class Program
    {
        public static int CalcularIdade(int Ano)
        {
            int AnoAtual = DateTime.Now.Date.Year;
            int Idade = AnoAtual - Ano;
            return Idade;
        }
        static void Main(string[] args)
        {
            int Idade = CalcularIdade(2006);
            Console.WriteLine(Idade + " anos");

            Console.ReadKey();
        }
    }
}
