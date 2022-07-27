#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    /*
    Matriz é a uma estrutura de dados do tipo vetor com duas ou mais dimensões.
    Os itens de uma matriz tem que ser todos do mesmo tipo de dado.
    Na prática, as matrizes formam tabelas na memória.
    */

    //Criando uma matriz
    int matriz[2][2];


    int i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //Imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }

    //Lendo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
           scanf("%d", &matriz[i][j]);
        }
    }

    //Imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%d ",matriz[i][j]);
        }
        printf("\n");
    }
}
