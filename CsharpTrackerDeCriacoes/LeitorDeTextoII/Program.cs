using System;
using System.IO;

namespace LeitorDeTextoII
{
    internal class Program
    {
        static void Main(string[] args)
        {
            if (args.Length == 0)
            {
                Console.WriteLine("Favor, informar nome do arquivo como argumento.");
                return;
            }

            string arquivo = args[0];
            string linha = "";

            try
            {
                using (StreamReader leitura = new StreamReader(arquivo))
                {
                    while ((linha = leitura.ReadLine()) != null)
                    {
                        Console.WriteLine(linha);
                    }
                }
                Console.ReadLine();
            }
            catch (Exception error)
            {
                Console.WriteLine("Error: " + error.Message);
            }
            finally
            {
                Console.WriteLine("Leitura realizada com sucesso!");
            }
        }
    }
}
