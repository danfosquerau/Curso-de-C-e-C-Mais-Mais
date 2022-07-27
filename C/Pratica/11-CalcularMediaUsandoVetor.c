#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    //Crie um algoritmo que leia um tamanho um vetor e preencha cada posição com um valor
    //depois calcule a média dos valores acessando o vetor.

    int tamanho;

    printf("Qual será o tamanho do vetor?");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;

    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }

    for(i = 0; i < tamanho; i++){
        printf("vetor[%d] = %.2f\n",i, vetor[i]);
    }

    printf("A média dos valores é: %.2f\n", soma/tamanho);
}
