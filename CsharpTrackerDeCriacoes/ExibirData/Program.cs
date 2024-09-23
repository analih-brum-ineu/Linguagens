using System;

namespace ExibirData
{
    internal class Program
    {
        public static void ExibirData()
        {
            string data = DateTime.Now.ToString();
            Console.WriteLine(data);
        }
        static void Main(string[] args)
        {
            ExibirData();

            Console.ReadKey();
        }
    }
}
