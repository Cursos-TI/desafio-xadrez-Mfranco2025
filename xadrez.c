#include <stdio.h>

int main() {

    // Nível Novato - Movimentação das Peças
    //variaveis para controlar o numero de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBisbo = 5;
    int casasRainha = 8;
    int casasCavalo = 3;

    //Variaveis para controlar as estruturas de repetição
    int i; // para a torre
    int j = 0; // para o Bispo
    int k = 0; // para a Rainha
    int m = 0; // para o cavalo

   
    //movimentando a torre ultilizano o loop for.
    //A torre se move 5 casas para a direita.
    printf("Movimento da Torre (5 casas à direita):\n");
    for (i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n"); //Linha em branco para as separar a movimentação das peças 

    //Movimentando o Bispo ultilizando o loop while
    //O bispo se move 5 casas na diagonal combinando "cima" e  "direita"
    printf("Movimentando o Bispo: (5 casas para cima e à direita):\n");
    while (j < casasBisbo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n"); // linha em branco

    //Movimento da Rainha ultilizando o loop do-while
    //A Rainha se move 8 casas para esquerda
    printf("Movimento da Rainha: (8 casas para esquerda):\n");
    do {
        k++;
        printf("Esquerda\n");
    } while (k < casasRainha);
    printf("\n");

     // Nível Aventureiro - Movimentando o Cavalo
     // cavalo faz 2 movimentos para baixo e 1 movimento para a esquerda
     printf("Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda):\n");
     while (m < casasCavalo) {  
        if (m < 2) {  // Primeiras 2 iterações (m = 0 ou 1): move para baixo
            for (i = 1; i <= 1; i++) {  // Loop for executa 2 vezes respeitando o if
                printf("Baixo\n");
            }
        } else {  
            printf("Esquerda\n"); 
        }
        m++;
    }
    return 0;
}