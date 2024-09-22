using System;

namespace JogoFrasesDeLivros
{
    internal class Program
    {
        static int[] Shuffle(int[] array)
        {
            Random rand = new Random();
            for (int i = 0; i < array.Length; i++)
            {
                int j = rand.Next(i, array.Length);
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }

            return array;
        }
        static void Main(string[] args)
        {
            string[] Frases =
            {
                "Quando acordei hoje de manhã, eu sabia quem eu era, mas acho que já mudei muitas vezes desde então.",
                "Às vezes o mundo não precisa de um outro herói. Às vezes o que ele precisa é de um monstro.",
                "Não existe o bem e o mal, só existe o poder, e aqueles que são fracos demais para consegui-lo.",
                "Quanto mais eu conheço o mundo, mais estou convencida de que nunca verei um homem que eu realmente possa amar.",
                "Prefiro o ódio de qualquer pessoa do que a pena."
            };

            string[] Respostas =
            {
                "Alice no País das Maravilhas de Lewis Carroll",
                "Drácula de Bram Stoker",
                "Harry Potter e a Pedra Filosofal de J. K. Rolling",
                "Razão e Sensibilidade de Jane Austen",
                "The Outsiders de S. E. Hinton"
            };

            string Sair = "Sim";
            string Resposta = " ";

            int ContadorDeIndices = 0;

            int[] IndicesParaSorteio = new int[Frases.Length];

            for (int i = 0; i < Frases.Length; i++)
            {
                IndicesParaSorteio[i] = i;
            }

            IndicesParaSorteio = Program.Shuffle(IndicesParaSorteio);

            while (Sair != "Não" && ContadorDeIndices < Frases.Length)
            {

                Console.WriteLine("Frase: {0}", Frases[IndicesParaSorteio[ContadorDeIndices]]);

                Console.Write("Resposta: ");
                Resposta = Console.ReadLine();

                if (Resposta.ToUpper() != Respostas[IndicesParaSorteio[ContadorDeIndices]].ToUpper())
                {
                    Console.WriteLine("Resposta incorreta!");
                }
                else
                {
                    Console.WriteLine("Resposta correta. Parabénx!");
                }

                ContadorDeIndices++;

                Console.WriteLine("Deseja jogar novamente? ");
                Sair = Console.ReadLine();
            }
        }
    }
}
