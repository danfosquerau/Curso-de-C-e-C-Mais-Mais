#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 4, opcao = 3, d = 10, e = 15;
    float b = 2.5;
    char c = 'x';
    bool t = true, f = false;


    //Condicional Simples
    //Se o valor � igual que o outro
    if(a == 5){
        printf("A vari�vel a � igual a 5\n");
    }
    if(b == 2.5){
        printf("A vari�vel b � igual a 2.5\n");
    }
    if(c == 'x'){
        printf("A vari�vel c � igual a letra x\n");
    }

    //N�mero par ou impar
    if(a % 2 == 1){
        printf("A vari�vel a � impar\n");
    }else{
        printf("A vari�vel a � par\n");
    }
    printf("\n");





    //Condicional Composta
    if(opcao == 1){
        printf("A op��o � igual a 1\n");
    }else if(opcao == 2){
         printf("A op��o � igual a 2\n");
    }else{
        printf("A op��o n�o � igual a 1 e nem 2\n");
    }
    printf("\n");





    //Condicionais matem�ticas
    //Se o valor � maior que o outro
    if(a > 2){
        printf("%d � maior que 2\n", a);
    }

    //Se o valor � maior ou igual que o outro
    if(e >= d){
        printf("%d � maior ou igual a %d\n", e, d);
    }

    //Se o valor � menor que o outro
    if(a < 10){
        printf("%d � menor que 10\n", a);
    }

    //Se o valor � menor ou igual que o outro
    if(a <= 10){
        printf("%d � menor ou igual a 10\n", a);
    }
    printf("\n");





    //Condicionais de diferen�a
    //Se o valor � diferente que o outro
    if(e != 10){
        printf("%d � diferente que 10\n", e);
    }
    if(c != 'a'){
        printf("%c � diferente que a\n", c);
    }
    printf("\n");





    //Condicionais booleanas
    //Verdadeiro ou falso
    //Se t for verdadeiro
    if(t){
        printf("t � verdadeiro\n");
    }
    if(f){
        printf("f � verdadeiro\n");
    }else{
        printf("f � falso\n");
    }
    printf("\n");






    //Condicional de falsidade
    if(!f){
        printf("f � falso\n");
    }
    printf("\n");






    //Condicionais de char usando a tabela ASCII
    //Condicional Simples
    if(c == 'x'){
        printf("A vari�vel c � x\n");
    }

    //C�digo em ASCII
    printf("C�digo da vari�vel c � %d\n", c);

    //Comparando C�digo ASCII
    if(c == 120){
         printf("A vari�vel c � x\n");
    }





    //Condicionais com conectivos l�gicos
    //Conectivo l�gico "E" ou "And", sinal utilizado "&&" sem as aspas
    //Apenas � verdadeira se todas as condicionais forem verdadeiras
    if(a > 2 && a < 10){
        printf("\nA vari�vel 'a' est� entre 2 e 10");
    }else{
        printf("\nA vari�vel 'a' n�o est� entre 2 e 10");
    }

    //Conectivo l�gico "Ou" ou "Or", sinal utilizado "||" sem as aspas
    //Se umas das condicionais for verdadeiras j� se torna verdadeiro
    if(a > 2 || a > 10){
        printf("\nA vari�vel 'a' � maior que 2 ou 10");
    }else{
        printf("\nA vari�vel 'a' n�o � maior que 2 ou 10");
    }

    //Misturando Conectivos
    if( (a > 2 && a < 10) || a == 20 ){
        printf("\nA vari�vel 'a' est� entre 2 e 10 ou ela vale 20 ");
    }

    system("pause");
}
