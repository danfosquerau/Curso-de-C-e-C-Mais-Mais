#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    /*
    Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 opções:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usuário escolher uma opção, mostre o resultado da operação escolhida
    com os dois valores lidos.
    */

    float valor1, valor2;
    int opcao;

    printf("Digite o 1º valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2º valor: ");
    scanf("%f", &valor2);

    printf("Escolha uma opção:\n");
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Dividir\n");
    printf("4-Multiplicar\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Resultado da soma é %.2f\n", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da subtração é %.2f\n", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da divisão é %.2f\n", valor1 / valor2);
            break;
        case 4:
            printf("Resultado da multiplicação é %.2f\n", valor1 * valor2);
            break;
        default:
            printf("Opção inválida!\n");
            break;
    }
}
