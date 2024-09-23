using System;

namespace SistemaMatematico
{
    internal class Program
    {
        static int ExibirMenu()
        {
            Console.Clear();
            Console.WriteLine("Menu:");
            Console.WriteLine("1 | Calcular fatorial;");
            Console.WriteLine("2 | Verificar número primo;");
            Console.WriteLine("3 | Efetuar divisão de inteiro;");
            Console.WriteLine("4 | Sair.");
            Console.WriteLine("");
            Console.Write("Informe o código da ação: ");
            int codigo = Int32.Parse(Console.ReadLine());
            return codigo;
        }

        static int CalcularFatorial(int numero)
        {
            for (int i = numero - 1; i > 0; i--)
            {
                numero = numero * i;
            }
            return numero;
        }

        static Boolean VerificarNumeroPrimo(int numero)
        {
            Boolean resultado = false;
            int contador = 0;
            for (int i = numero; i > 0; i--)
            {
                if (numero % i == 0) { contador++; }
            }
            if (contador == 2) { resultado = true; }
            return resultado;
        }

        static void EfetuarDivisao(int dividendo, int divisor, out int resto, out int quociente)
        {
            resto = dividendo % divisor;
            quociente = dividendo / divisor;
        }
        static void Main(string[] args)
        {
            int codigo = 0, fatorial = 0;

            while (codigo != 4)
            {
                codigo = ExibirMenu();
                Console.Clear();
                switch (codigo)
                {
                    case 1:
                        Console.Write("Informe um número: ");
                        int numero = Int32.Parse(Console.ReadLine());
                        fatorial = CalcularFatorial(numero);
                        Console.WriteLine("O resultado de {0}! é {1}", numero, fatorial);
                        Console.WriteLine("Pressione qualquer tecla para continuar...");
                        Console.ReadKey();
                        break;
                    case 2:
                        Console.Write("Informe um número: ");
                        numero = Int32.Parse(Console.ReadLine());
                        if (VerificarNumeroPrimo(numero) == true) { Console.WriteLine("O número {0} é primo!", numero); }
                        else { Console.WriteLine("O número {0} não é primo!", numero); }
                        Console.WriteLine("Pressione qualquer tecla para continuar...");
                        Console.ReadKey();
                        break;
                    case 3:
                        Console.Write("Informe o dividendo: ");
                        int dividendo = Int32.Parse(Console.ReadLine());
                        Console.Write("Informe o divisor: ");
                        int divisor = Int32.Parse(Console.ReadLine());
                        EfetuarDivisao(dividendo, divisor, out int resto, out int quociente);
                        Console.WriteLine("O resultado de {0} dividido por {1} é {2} e seu resto é {3}", dividendo, divisor, quociente, resto);
                        Console.WriteLine("Pressione qualquer tecla para continuar...");
                        Console.ReadKey();
                        break;
                }
            }
            Console.ReadLine();
        }
    }
}
