#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas, int atual)
{
    if (atual > casas)
        return;
    printf("Direita\n"); // Imprime direção do movimento

    moverTorre(casas, atual + 1); // Chama função de novo para próxima casa
}

// Função para mover o Bispo na diagonal
// Usa recursividade  e loop aninhado
void moverBispo(int casas, int atual)
{
    if (atual >= casas)
        return;
    for (int j = 0; j < 1; j++)
    {
        printf("Cima, Direita\n"); // Movimento diagonal
    }

    // Chamada recursiva para o próximo movimento vertical
    moverBispo(casas, atual + 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas, int atual)
{
    if (atual > casas)
        return;
    printf("Esquerda\n"); // Imprime direção do movimento

    moverRainha(casas, atual + 1); // Chama função de novo para próxima casa
}

// Função para mover o Cavalo em "L" (2 casas para cima, 1 para direita)
void moverCavalo(int movimentos)
{
    // Loop que controla quantos movimentos em "L" fazer
    for (int i = 0; i < movimentos; i++)
    {
        // Loop para mover 2 casas para cima
        for (int vertical = 0; vertical < 2; vertical++)
        {
            printf("Cima\n");

            // Só move para direita depois de ter subido 2 casas
            if (vertical == 1)
            {
                // Loop para mover 1 casa para direita
                for (int horizontal = 0; horizontal < 1; horizontal++)
                {
                    printf("Direita\n");
                }
            }
        }
    }
}

int main()
{
    // Define quantas casas cada peça vai andar
    int casasTorre = 5;  // Torre anda 5 casas
    int casasBispo = 5;  // Bispo anda 5 casas na diagonal
    int casasRainha = 8; // Rainha anda 8 casas
    int casasCavalo = 1; // Cavalo faz 1 movimento em "L"

    // Mostra movimento da Torre
    printf("Movimento da Torre (5 casas à direita):\n");
    moverTorre(casasTorre, 1);
    printf("\n");

    // Mostra movimento do Bispo
    printf("Movimento do Bispo (5 casas diagonais):\n");
    moverBispo(casasBispo, 0);
    printf("\n");

    // Mostra movimento da Rainha
    printf("Movimento da Rainha (8 casas para esquerda):\n");
    moverRainha(casasRainha, 1);
    printf("\n");

    // Mostra movimento do Cavalo
    printf("Movimento do Cavalo (2 casas para cima e 1 casa para a direita):\n");
    moverCavalo(casasCavalo);

    return 0;
}