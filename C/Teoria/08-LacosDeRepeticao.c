#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 1, b = 10;

    /*
    Laço de repetição WHILE
    Verifica a condição primeiro, se verdadeira executa o laço até a concição se tornar falsa
    Verifica antes de executar
    */
    printf("WHILE\n");
    //Contando até 10
    while(a <= 10){
        printf("%d\n", a);

        //Incremento
        //Forma 1
        a = a + 1;
        //Forma 2
        //a++;
    }

    //Contagem Regressiva
    printf("\n");
    while(b >= 1){
        printf("%d\n", b);

        //Decremento
        //Forma 1
        //b = b - 1;
        //Forma 2
        b--;
    }





    /*
    Laço de repetição DO-WHILE
    Ele é igual ao while, porém ele executa uma vez o laço antes de vereficar a condição
    se verdadeira repete até se tornar falsa
    Executa antes de verificar
    */
    printf("\n\nDO-WHILE\n");
    a = 1;
    //Contando até 10
    do{
        printf("%d\n", a);
        a++;
    }while(a <= 10);





    /*
    Laço de repetição FOR
    Usado para realizar contagem
    */
    printf("\n\nFOR\n");
    int cont;
    //Tabuada do 5
    for(cont = 1; cont <= 10; cont++){
        printf("5 X %d = %d\n",cont, 5 * cont);
    }

    //Contando de 2 em 2
    printf("\n");
    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("%d\n",cont);
    }

    //Contagem regressiva
    printf("\n");
    for(cont = 10; cont > 0; cont--){
        printf("%d\n", cont);
    }
}
