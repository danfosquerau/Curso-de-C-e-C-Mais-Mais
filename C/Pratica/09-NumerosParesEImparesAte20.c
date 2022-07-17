#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    /*Crie um algoritmo que mostre se o número
    é par ou ímpar até 20.
    */

    for(int i = 0; i <= 20; i++){
        if(i % 2 == 0){
            printf("%d é par\n", i);
        }else{
            printf("%d é ímpar\n", i);
        }
    }
}
