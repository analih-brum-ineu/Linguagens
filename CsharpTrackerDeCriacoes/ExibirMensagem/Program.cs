using System;

namespace ExibirMensagem
{
    internal class Program
    {
        public static void ExibirMensagem(string Nome)
        {
            Console.WriteLine("Bem-vindo(a), {0}!", Nome);
        }
        static void Main(string[] args)
        {
            string Nome = "Analih Brum Ineu";
            ExibirMensagem(Nome);

            Console.ReadKey();
        }
    }
}
