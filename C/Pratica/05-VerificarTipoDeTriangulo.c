#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores e informe se eles são
    //iguais entre si para formarem os lados de um triângulo equilátero.

    int ladoA, ladoB, ladoC;
    printf("Digite os 3 valores:\n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    //Analisa se é equilátero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("O triângulo é equilátero\n");
    }else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("O triângulo é isósceles!\n");
        }else{
            printf("O triângulo é escaleno!\n");
        }
    }
}
