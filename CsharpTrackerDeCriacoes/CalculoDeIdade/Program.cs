using System;

namespace CalculoDeIdade
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe o ano de nascimento: ");
            int ano = Int32.Parse(Console.ReadLine());

            int anoAtual = DateTime.Now.Year;

            if (ano < anoAtual)
            {
                int idade = anoAtual - ano;
                Console.WriteLine("Idade = " + idade + " anos");
            }
            else { Console.WriteLine("O ano informado é inválido!"); }
            Console.ReadLine();
        }
    }
}
