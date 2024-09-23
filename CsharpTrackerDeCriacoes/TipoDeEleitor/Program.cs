using System;

namespace TipoDeEleitor
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Console.Write("Informe uma idade: ");
            int idade = Int32.Parse(Console.ReadLine());

            if (idade > 0 && idade < 16)
            {
                Console.WriteLine("Essa pessoa ainda não pode ser um eleitor!");
            }
            else if (idade >= 16 && idade < 18)
            {
                Console.WriteLine("Voto facultativo!");
            }
            else if (idade >= 18 && idade < 65)
            {
                Console.WriteLine("Voto obrigatório!");
            }
            else if (idade >= 65 && idade <= 122)
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
