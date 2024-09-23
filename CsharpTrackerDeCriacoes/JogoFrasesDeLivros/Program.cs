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
            string[] frases =
            {
                "Quando acordei hoje de manhã, eu sabia quem eu era, mas acho que já mudei muitas vezes desde então.",
                "Às vezes o mundo não precisa de um outro herói. Às vezes o que ele precisa é de um monstro.",
                "Não existe o bem e o mal, só existe o poder, e aqueles que são fracos demais para consegui-lo.",
                "Quanto mais eu conheço o mundo, mais estou convencida de que nunca verei um homem que eu realmente possa amar.",
                "Prefiro o ódio de qualquer pessoa do que a pena."
            };

            string[] respostas =
            {
                "Alice no País das Maravilhas de Lewis Carroll",
                "Drácula de Bram Stoker",
                "Harry Potter e a Pedra Filosofal de J. K. Rolling",
                "Razão e Sensibilidade de Jane Austen",
                "The Outsiders de S. E. Hinton"
            };

            string sair = "Sim";
            string resposta = " ";

            int contadorDeIndices = 0;

            int[] indicesParaSorteio = new int[frases.Length];

            for (int i = 0; i < frases.Length; i++)
            {
                indicesParaSorteio[i] = i;
            }

            indicesParaSorteio = Program.Shuffle(indicesParaSorteio);

            while (sair != "Não" && contadorDeIndices < frases.Length)
            {

                Console.WriteLine("Frase: {0}", frases[indicesParaSorteio[contadorDeIndices]]);

                Console.Write("Resposta: ");
                resposta = Console.ReadLine();

                if (resposta.ToUpper() != respostas[indicesParaSorteio[contadorDeIndices]].ToUpper())
                {
                    Console.WriteLine("Resposta incorreta!");
                }
                else
                {
                    Console.WriteLine("Resposta correta. Parabénx!");
                }

                contadorDeIndices++;

                Console.WriteLine("Deseja jogar novamente? ");
                sair = Console.ReadLine();
            }
        }
    }
}
