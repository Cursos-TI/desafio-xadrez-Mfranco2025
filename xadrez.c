#include <stdio.h>

int main() {

    // Nível Novato - Movimentação das Peças
    //variaveis para controlar o numero de casas que cada peça deve se mover
    int casasTorre = 5;
    int casasBisbo = 5;
    int casasRainha = 8;

    //Variaveis para controlar as estruturas de repetição
    int i; // para o for
    int j = 0; // para o while
    int k = 0; // para o Do
    int m = 0; // para o Cabalo

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

    return 0;
}