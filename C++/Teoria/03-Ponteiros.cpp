#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
    setlocale(LC_ALL,"");

    /*
    Um ponteiro � uma vari�vel capaz de armazenar um endere�o de mem�ria ou o endere�o de outra vari�vel.
    */

    //Vari�vel
    int a = 20;

    printf("Valor da vari�vel a: %d\n", a);
    printf("Endere�o de mem�ria da vari�vel a: %d\n", &a);


    //Declarando um ponteiro
    int *ponteiro;

    //Apontando para o endere�o de mem�ria da vari�vel "a"
    ponteiro = &a;

    printf("Valor da vari�vel a: %d \n", a);

    //Para acessar o conte�do de uma posi��o de mem�ria, cujo endere�o est� armazenado em um ponteiro, usa-se "*"
    //Alterando o conte�do da vari�vel "a" atrav�s do ponteiro
    *ponteiro = 40;

    //Imprimindo o valor de uma vari�vel
    printf("Valor de b: %d \n", b);

    return 0;
}
