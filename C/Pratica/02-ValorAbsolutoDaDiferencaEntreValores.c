#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 2 valores e mostre o valor absoluto da diferença entre elas

    int valor1, valor2;

    printf("Insira o 1° valor: ");
    scanf("%d", &valor1);

    printf("Insira o 2° valor: ");
    scanf("%d", &valor2);

    printf("A diferença entre os dois valores é: %d", abs(valor1 - valor2) );

    printf("\n");
    system("pause");
}
