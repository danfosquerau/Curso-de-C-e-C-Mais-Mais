#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 notas e calcule a m�dia entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //sen�o foi reprovado.

    float nota1, nota2, nota3, media;

    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    //Para limitar quantas casas decimais ser�o mostradas usa-se
    //"%.0f% onde "0" � a quandidade de casas decimais.
    printf("\nA m�dia do aluno foi: %.2f", media);

    if(media > 7 ){
        printf("\n\nO aluno foi aprovado! Parab�ns campe�o!");
    }else{
        printf("\n\nO aluno foi reprovado! Sinto muito, na pr�xima voc� vai conseguir!");
    }

}
