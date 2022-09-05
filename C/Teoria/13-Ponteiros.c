#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    /*
    Um ponteiro é uma variável capaz de armazenar um endereço de memória ou o endereço de outra variável.
    */

    //Variável
    int a = 20;

    printf("Valor da variável \"a\" é %d\n", a);
    printf("Endereço de memória da variável \"a\" é %d\n", &a);


    //Declarando um ponteiro
    int *ponteiro;

    //Apontando para o endereço de memória da variável "a"
    ponteiro = &a;

    //Para acessar o conteúdo de uma posição de memória, cujo endereço está armazenado em um ponteiro, usa-se "*"
    //Alterando o conteúdo da variável "a" através do ponteiro
    *ponteiro = 40;

    //Imprimindo o valor de uma variável
    printf("Valor de \"a\" é %d\n", a);
}
