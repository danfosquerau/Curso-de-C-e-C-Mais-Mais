#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL,"");

    /*Crie um algoritmo que imprima os n�meros de 10 at� 0
    de forma regressiva. (usando While, Do While ou For)
    */

    //While
    int i = 10;
    while(i >= 0){
        printf("%d\n", i);
        i--;
    }


    //Do While
    printf("\n");
    i = 10;
    do{
        printf("%d\n", i);
        i--;
    }while(i >= 0);


    //For
    printf("\n");
    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
}
