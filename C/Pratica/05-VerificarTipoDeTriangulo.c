#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 valores e informe se eles s�o
    //iguais entre si para formarem os lados de um tri�ngulo equil�tero.

    int ladoA, ladoB, ladoC;
    printf("Digite os 3 valores:\n");
    scanf("%d %d %d", &ladoA, &ladoB, &ladoC);

    //Analisa se � equil�tero
    if( (ladoA == ladoB) && (ladoB == ladoC) ){
        printf("O tri�ngulo � equil�tero\n");
    }else{
        //Analisa se existem pelo menos dois lados iguais
        if( (ladoA == ladoB) || (ladoB == ladoC) || (ladoC == ladoA)){
            printf("O tri�ngulo � is�sceles!\n");
        }else{
            printf("O tri�ngulo � escaleno!\n");
        }
    }
}
