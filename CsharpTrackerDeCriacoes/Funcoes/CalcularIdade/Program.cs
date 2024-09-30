using System;

namespace CalcularIdade
{
    internal class Program
    {
        public static int CalcularIdade(int ano)
        {
            int anoAtual = DateTime.Now.Date.Year;
            int idade = anoAtual - ano;
            return idade;
        }
        static void Main(string[] args)
        {
            int idade = CalcularIdade(2006);
            Console.WriteLine(idade + " anos");

            Console.ReadKey();
        }
    }
}
