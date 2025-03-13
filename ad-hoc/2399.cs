using System;

public class CampoMinado
{
    public static void Main(string[] args)
    {
        int N = Convert.ToInt32(Console.ReadLine());
        int[] tabuleiro = new int[N];
        
        for (int i = 0; i < N; i++)
        {
            tabuleiro[i] = Convert.ToInt32(Console.ReadLine().Trim());
        }

        for (int i = 0; i < N; i++)
        {
            int minas = 0;
            if (tabuleiro[i] == 1)
                minas++;
            if (i > 0 && tabuleiro[i - 1] == 1)
                minas++;
            if (i < N - 1 && tabuleiro[i + 1] == 1)
                minas++;

            Console.WriteLine(minas);
        }
    }
}