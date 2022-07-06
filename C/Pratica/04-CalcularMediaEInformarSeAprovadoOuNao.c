#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 notas e calcule a média entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //senão foi reprovado.

    float nota1, nota2, nota3, media;

    printf("Digite a nota 1:");
    scanf("%f", &nota1);

    printf("\nDigite a nota 2:");
    scanf("%f", &nota2);

    printf("\nDigite a nota 3:");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    //Para limitar quantas casas decimais serão mostradas usa-se
    //"%.0f% onde "0" é a quandidade de casas decimais.
    printf("\nA média do aluno foi: %.2f", media);

    if(media > 7 ){
        printf("\n\nO aluno foi aprovado! Parabéns campeão!");
    }else{
        printf("\n\nO aluno foi reprovado! Sinto muito, na próxima você vai conseguir!");
    }

}
