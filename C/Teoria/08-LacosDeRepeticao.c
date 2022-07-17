#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "");

    int a = 1, b = 10;

    /*
    La�o de repeti��o WHILE
    Verifica a condi��o primeiro, se verdadeira executa o la�o at� a conci��o se tornar falsa
    Verifica antes de executar
    */
    printf("WHILE\n");
    //Contando at� 10
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
    La�o de repeti��o DO-WHILE
    Ele � igual ao while, por�m ele executa uma vez o la�o antes de vereficar a condi��o
    se verdadeira repete at� se tornar falsa
    Executa antes de verificar
    */
    printf("\n\nDO-WHILE\n");
    a = 1;
    //Contando at� 10
    do{
        printf("%d\n", a);
        a++;
    }while(a <= 10);





    /*
    La�o de repeti��o FOR
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
