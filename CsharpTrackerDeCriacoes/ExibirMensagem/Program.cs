using System;

namespace ExibirMensagem
{
    internal class Program
    {
        public static void ExibirMensagem(string nome)
        {
            Console.WriteLine("Bem-vindo(a), {0}!", nome);
        }
        static void Main(string[] args)
        {
            string nome = "Analih Brum Ineu";
            ExibirMensagem(nome);

            Console.ReadKey();
        }
    }
}
