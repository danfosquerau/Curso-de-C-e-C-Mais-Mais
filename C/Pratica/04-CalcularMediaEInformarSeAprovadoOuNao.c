#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 notas e calcule a m�dia entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //sen�o foi reprovado.

    float nota1, nota2, nota3, media;

    printf("Digite a 1� nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2� nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3� nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    //Para limitar quantas casas decimais ser�o mostradas usa-se
    //"%.0f% onde "0" � a quandidade de casas decimais.
    printf("A m�dia do aluno foi %.2f\n", media);

    if(media >= 7 ){
        printf("O aluno foi aprovado! Parab�ns campe�o!\n");
    }else{
        printf("O aluno foi reprovado! Sinto muito, na pr�xima voc� vai conseguir!\n");
    }
}
