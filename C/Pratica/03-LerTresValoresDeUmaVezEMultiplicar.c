#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 números inteiros de uma só vez e
    //coloque os resultado da multiplicação entre os 3 em uma variável própria,
    //depois exiba essa variável.

    int valor1, valor2, valor3, resultado;

    printf("Digite os 3 valores:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    resultado = valor1 * valor2 * valor3;

    printf("O resultado é %d\n", resultado);
}
