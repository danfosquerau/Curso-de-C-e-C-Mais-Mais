#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia 2 valores e mostre a m�dia entre elas.

    //Definindo Vari�veis
    float valor1, valor2, resultado;

    //Lendo primeiro valor
    printf("Insira o 1� valor: ");
    scanf("%f", &valor1);

    //Lendo segundo valor
    printf("Insira o 2� valor: ");
    scanf("%f", &valor2);

    //Calculando e mostrando resultado final
    resultado = (valor1 + valor2) / 2;
    printf("A m�dia � %f\n", resultado);
}
