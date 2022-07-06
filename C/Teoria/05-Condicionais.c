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
    //Se o valor é igual que o outro
    if(a == 5){
        printf("A variável a é igual a 5\n");
    }
    if(b == 2.5){
        printf("A variável b é igual a 2.5\n");
    }
    if(c == 'x'){
        printf("A variável c é igual a letra x\n");
    }

    //Número par ou impar
    if(a % 2 == 1){
        printf("A variável a é impar\n");
    }else{
        printf("A variável a é par\n");
    }
    printf("\n");





    //Condicional Composta
    if(opcao == 1){
        printf("A opção é igual a 1\n");
    }else if(opcao == 2){
         printf("A opção é igual a 2\n");
    }else{
        printf("A opção não é igual a 1 e nem 2\n");
    }
    printf("\n");





    //Condicionais matemáticas
    //Se o valor é maior que o outro
    if(a > 2){
        printf("%d é maior que 2\n", a);
    }

    //Se o valor é maior ou igual que o outro
    if(e >= d){
        printf("%d é maior ou igual a %d\n", e, d);
    }

    //Se o valor é menor que o outro
    if(a < 10){
        printf("%d é menor que 10\n", a);
    }

    //Se o valor é menor ou igual que o outro
    if(a <= 10){
        printf("%d é menor ou igual a 10\n", a);
    }
    printf("\n");





    //Condicionais de diferença
    //Se o valor é diferente que o outro
    if(e != 10){
        printf("%d é diferente que 10\n", e);
    }
    if(c != 'a'){
        printf("%c é diferente que a\n", c);
    }
    printf("\n");





    //Condicionais booleanas
    //Verdadeiro ou falso
    //Se t for verdadeiro
    if(t){
        printf("t é verdadeiro\n");
    }
    if(f){
        printf("f é verdadeiro\n");
    }else{
        printf("f é falso\n");
    }
    printf("\n");






    //Condicional de falsidade
    if(!f){
        printf("f é falso\n");
    }
    printf("\n");






    //Condicionais de char usando a tabela ASCII
    //Condicional Simples
    if(c == 'x'){
        printf("A variável c é x\n");
    }

    //Código em ASCII
    printf("Código da variável c é %d\n", c);

    //Comparando Código ASCII
    if(c == 120){
         printf("A variável c é x\n");
    }





    //Condicionais com conectivos lógicos
    //Conectivo lógico "E" ou "And", sinal utilizado "&&" sem as aspas
    //Apenas é verdadeira se todas as condicionais forem verdadeiras
    if(a > 2 && a < 10){
        printf("\nA variável 'a' está entre 2 e 10");
    }else{
        printf("\nA variável 'a' não está entre 2 e 10");
    }

    //Conectivo lógico "Ou" ou "Or", sinal utilizado "||" sem as aspas
    //Se umas das condicionais for verdadeiras já se torna verdadeiro
    if(a > 2 || a > 10){
        printf("\nA variável 'a' é maior que 2 ou 10");
    }else{
        printf("\nA variável 'a' não é maior que 2 ou 10");
    }

    //Misturando Conectivos
    if( (a > 2 && a < 10) || a == 20 ){
        printf("\nA variável 'a' está entre 2 e 10 ou ela vale 20 ");
    }

    system("pause");
}
