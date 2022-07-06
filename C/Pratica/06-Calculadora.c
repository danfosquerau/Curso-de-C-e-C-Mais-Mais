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

    printf("Digite o primeiro valor:");
    scanf("%f", &valor1);
    printf("Digite o segundo valor:");
    scanf("%f", &valor2);

    printf("\nEscolha uma op��o:");
    printf("\n1-Somar");
    printf("\n2-Subtrair");
    printf("\n3-Dividir");
    printf("\n4-Multiplicar");
    scanf("%d", &opcao);
    switch(opcao){
        case 1:
            printf("Resultado da soma: %.2f", valor1 + valor2);
            break;
        case 2:
            printf("Resultado da subtra��o: %.2f", valor1 - valor2);
            break;
        case 3:
            printf("Resultado da divis�o: %.2f", valor1 / valor2);
            break;
        case 4:
            printf("Resultado da multiplica��o: %.2f", valor1 * valor2);
            break;
        default:
            printf("Op��o inv�lida!");
            break;
    }
}
