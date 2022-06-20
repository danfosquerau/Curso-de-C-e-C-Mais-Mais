#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Biblioteca para manipular vari�veis l�gicas, como verdadeiro e falso
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    //Forma simples apenas texto
    //"\n" serve para quebra de linha na tela
    printf("Oi, Galera!\n");

    //Declarado vari�veis
    int i;
    float f;
    char s;

    //Vari�vel do tipo bool ou Boolean serve para sim(true) ou nao(false)
    bool binario = true;

    //Declara��o de vari�vel do tipo int(n�meros inteiros) com atribui��o de um valor fixo
    int a = 5;

    //Alterar o valor da vari�vel;
    a = 10;

    //Escrever na tela o valor de uma vari�vel inteira
    //Para identificar aonde ser� ixibido o valor da vari�vel
    //utiliza-se "%d" para vari�vel do tipo int
    printf("%d\n", a);

    //Escreve na tela texto mais o valor da vari�vel
    printf("O valor da vari�vel � %d\n", a);

    int d = 2;

    //Adicionando ao texto o valor de mais de uma vari�vel
    printf("O valor da vari�vel A � %d e da vari�vel D � %d", a, d);

    //Ler comando do teclado e atribuir a uma vari�vel
    //Usa-se "&" antes do nome da vari�vel para identificar o
    //endere�o de mem�ria utilizada pela vari�vel
    scanf("%d", &a);
    printf("O valor da vari�vel mudou para %d\n", a);


    //Declara��o de vari�vel do tipo float, n�meros quebrados
    //Para n�meros quebrados utiliza-se "." no c�digo
    //Alterando a linguagem para Portugu�s usando setlocale(),
    //pode-se usar "," para informar valor na execu��o
    float b = 5.5;

    //Para identificar aonde ser� ixibido o valor da vari�vel
    //utiliza-se "%f" para vari�vel do tipo float
    printf("O valor da vari�vel � %f\n", b);
    scanf("%f", &b);
    printf("O valor da vari�vel mudou para %f\n", b);


    //Declara��o de vari�vel do tipo char, apenas uma letra
    //Usa-se '' aspas simples para o conte�do da vari�vel
    char c = 'c';

    //Para identificar aonde ser� ixibido o valor da vari�vel
    //utiliza-se "%c" para vari�vel do tipo char
    printf("O conte�do da vari�vel � %c\n", c);

    //Limpar o buffer, res�duos na mem�ria tempor�ria de leitura
    fflush(stdin);
    scanf("%c", &c);
    printf("O cont�udo da vari�vel mudou para %c\n", c);

}
