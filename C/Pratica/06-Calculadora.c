#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    /*
    Crie um algoritmo que leia dois valores e depois crie um menu (Usando Switch Case)
    de 4 op��es:1-Somar, 2-Subtrair,3-Dividir,4-Multiplicar.
    Depois que o usu�rio escolher uma op��o, mostre o resultado da opera��o escolhida
    com os dois valores lidos.
    */

    float valor1, valor2;
    int opcao;

    printf("Digite o 1� valor: ");
    scanf("%f", &valor1);
    printf("Digite o 2� valor: ");
    scanf("%f", &valor2);

    printf("Escolha uma op��o:\n");
    printf("1-Somar\n");
    printf("2-Subtrair\n");
    printf("3-Dividir\n");
    printf("4-Multiplicar\n");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Resultado da soma � %.2f\n", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da subtra��o � %.2f\n", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da divis�o � %.2f\n", valor1 / valor2);
            break;
        case 4:
            printf("Resultado da multiplica��o � %.2f\n", valor1 * valor2);
            break;
        default:
            printf("Op��o inv�lida!\n");
            break;
    }
}
