using System;

namespace TipoDeEleitor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe uma idade: ");
            int Idade = Int32.Parse(Console.ReadLine());

            if (Idade > 0 && Idade < 16)
            {
                Console.WriteLine("Essa pessoa ainda não pode ser um eleitor!");
            }
            else if (Idade >= 16 && Idade < 18)
            {
                Console.WriteLine("Voto facultativo!");
            }
            else if (Idade >= 18 && Idade < 65)
            {
                Console.WriteLine("Voto obrigatório!");
            }
            else if (Idade >= 65 && Idade <= 122)
            {
                Console.WriteLine("Voto facultativo!");
            }
            else 
            { 
                Console.WriteLine("A idade informada é inválida!"); 
            }
            Console.ReadLine();
        }
    }
}
