using System;

namespace ExibirData
{
    internal class Program
    {
        public static void ExibirData()
        {
            string Data = DateTime.Now.ToString();
            Console.WriteLine(Data);
        }
        static void Main(string[] args)
        {
            ExibirData();

            Console.ReadKey();
        }
    }
}
