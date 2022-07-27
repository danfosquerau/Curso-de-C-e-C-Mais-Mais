#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    /*
    O vetor é uma estrutura de dados indexada, que pode armazenar uma determinada quantidade de valores do mesmo tipo.
    Os dados armazenados em um vetor são chamados de itens do vetor.
    Para localizar a posição de um item em um vetor usamos um número inteiro denominado índice do vetor.
    Facilidade de manipular um grande conjunto de dados do mesmo tipo declarando-se apenas uma variável.
    */

    //Declarando um vetor
    int vetor[3];

    int cont;

    //Passando valores para o vetor
    vetor[0] = 5;
    vetor[1] = 10;
    vetor[2] = 15;

    //Adicionando 1 para cada posição
    for(cont = 0; cont < 3; cont++){
        vetor[cont] =  vetor[cont] + 1;
    }

    //Exibindo os valores do vetor
    printf("Posição 0: %d\n", vetor[0] );
    printf("Posição 1: %d\n", vetor[1] );
    printf("Posição 2: %d\n", vetor[2] );

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < 3; cont++){
        printf("Posição %d : %d\n", cont, vetor[cont] );
    }

    //Lendo 3 valores para o vetor
    for(cont = 0; cont < 3; cont++){
        scanf("%d", &vetor[cont]);
    }

    //Imprimindo vetor em um laço de repetição
    for(cont = 0; cont < 3; cont++){
        printf("Posição %d : %d\n", cont, vetor[cont] );
    }
}
