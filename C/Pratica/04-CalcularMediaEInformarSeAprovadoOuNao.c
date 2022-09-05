#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    //Crie um algoritmo que leia 3 notas e calcule a média entre elas.
    //Se o valor for maior que 7 informe que o aluno foi aprovado,
    //senão foi reprovado.

    float nota1, nota2, nota3, media;

    printf("Digite a 1º nota: ");
    scanf("%f", &nota1);

    printf("Digite a 2º nota: ");
    scanf("%f", &nota2);

    printf("Digite a 3º nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    //Para limitar quantas casas decimais serão mostradas usa-se
    //"%.0f% onde "0" é a quandidade de casas decimais.
    printf("A média do aluno foi %.2f\n", media);

    if(media >= 7 ){
        printf("O aluno foi aprovado! Parabéns campeão!\n");
    }else{
        printf("O aluno foi reprovado! Sinto muito, na próxima você vai conseguir!\n");
    }
}
