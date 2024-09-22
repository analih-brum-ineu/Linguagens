using System;

namespace CalculoDeIdade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe o ano de nascimento: ");
            int Ano = Int32.Parse(Console.ReadLine());

            int AnoAtual = DateTime.Now.Year;

            if (Ano < AnoAtual)
            {
                int Idade = AnoAtual - Ano;
                Console.WriteLine("Idade = " + Idade + " anos");
            }
            else { Console.WriteLine("O ano informado é inválido!"); }
            Console.ReadLine();
        }
    }
}
