#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 n�meros inteiros de uma s� vez e
    //coloque os resultado da multiplica��o entre os 3 em uma vari�vel pr�pria,
    //depois exiba essa vari�vel.

    int valor1, valor2, valor3, resultado;

    printf("Digite os 3 valores:\n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    resultado = valor1 * valor2 * valor3;

    printf("O resultado � %d\n", resultado);
}
