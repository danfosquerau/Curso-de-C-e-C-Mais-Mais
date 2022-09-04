#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*
De padrão na programação em C ou C++ é realizada a declaração das funções antes da Função principal do programa o "int main()"
na declaração é informada o tipo de retorno, nome da função e os parâmetros, essa declaração serve para que o compilador entenda que
existe essa função dentro do programa quando a função for chamada dentro da função principal ou qualquer outra,
ou pode ser feita também a definição da mesma, ou seja, as intruções e linhas do código da função
pórem de prática é realizada as declarações das funções antes da função principal e após realizada as definições
*/

//Declaração e definição
//Função sem parâmetro e sem retorno
void desenhaBorda(){
     printf("|--------------------------------------------|\n");
}

//Apenas declaração
int retornaDez();
float retornaQuebrado();
char retornaLetra();
bool retornaBooleano();
void limparTela();

//Funções com parâmetros
void mostraSucessor(int numero);
int retornaAntecessor(int numero);
void mostraSoma(int primeiroValor, int segundoValor);
int retornaSoma(int primeiroValor, int segundoValor);
int retornaComMaisDez(int numero);

//Funções usando ponteiro como parâmetro
void aumentaDez(int *numero);

/*
Funções usando vetores como parâmetro
Em C, não passamos realmente o vetor como parâmetro,
é passado no lugar um ponteiro para identificar o vetor
*/
void imprimeVetor(int *vetor, int tamanho);
void modificaVetor(int *vetor, int tamanho);

//Função principal
int main(){
    setlocale(LC_ALL,"");

    /*
    Uma função é um bloco de código que executa alguma operação. Opcionalmente, uma função pode definir parâmetros de entrada que
    permitem que os chamadores passem argumentos para a função. Opcionalmente, uma função pode retornar um valor como saída.
    As funções são úteis para encapsular operações comuns em um único bloco reutilizável,
    idealmente com um nome que descreve claramente o que a função faz.
    Na prática tudo em C++ é uma função, até a própria int main(void) é uma função.
    */

    printf("Hi\n");

    //Chamando a Função
    desenhaBorda();




    int a;
    //Passando o retorno de uma função para uma variável
    a = retornaDez();
    printf("Retorno da Função do Tipo \"Int\": %d\n", a);
    //Para poder usar aspas duplas no texto usa
    //o caractere "\" barra invertida serve para tirar a propriedade de um caractere especial.

    float b;
    b = retornaQuebrado();
    printf("Retorno da Função do Tipo \"Float\": %.2f\n", b);

    char letra;
    letra = retornaLetra();
    printf("Retorno da Função do Tipo \"Char\": %c\n", letra);

    if(retornaBooleano()){
        printf("Retorno da Função do Tipo \"Booleana\": Verdadeiro!\n");
    }
    else{
        printf("Retorno da Função do Tipo \"Booleana\": Falso!\n!");
    }



    system("pause");

    limparTela();




    //Funções com parâmetros
    printf("Digite um valor:");
    scanf("%d", &a);
    mostraSucessor(a);
    printf("O antecessor de %d é %d\n", a, retornaAntecessor(a));

    a = 5;
    int c = 7;
    mostraSoma(a,c);
    printf("A soma entre %d e %d é %d\n", a,c,retornaSoma(a,c));

    printf("%d\n", a);
    a = retornaComMaisDez(a);
    printf("%d\n", a);
    //Funções usando ponteiro como parâmetro
    //Passando ponteiro como parâmetro
    aumentaDez(&a);
    printf("%d\n", a);




    //Funções usando vetores como parâmetro
    int v[3] = {1,2,3};
    imprimeVetor(v, 3);
    modificaVetor(v, 3);
    imprimeVetor(v, 3);



    return 0;
}

//Na definição é preciso declarar novamente a função
//Funções com retornos
int retornaDez(){
    int numero = 10;
    return numero;
}
float retornaQuebrado(){
    return 5.5;
}
char retornaLetra(){
    //Em funções com retornos do tipo char pode também utilizar números inteiros como retorno, pois ele irá utilizar
    //a tabela ASCII para realizar a conversão para algum caractere, pois todo caractere tem um número inteiro correspondente
    return 'x';
}
bool retornaBooleano(){
    return true;
}
void limparTela(){
    //Comando para limpar a tela
    system("CLS");
}




//Funções com parâmetros
void mostraSucessor(int numero){
    printf("O sucessor de %d é %d\n", numero, numero + 1);
}
int retornaAntecessor(int numero){
    return numero - 1;
}
void mostraSoma(int primeiroValor, int segundoValor){
    printf("A soma entre %d e %d é %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}
int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
int retornaComMaisDez(int numero){
    return numero + 10;
}




//Funções usando ponteiro como parâmetro
void aumentaDez(int *numero){
    *numero = *numero + 10;
}




//Funções usando vetores como parâmetro
void imprimeVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho;i++)
        printf("%d \n",vetor[i]);
}

void modificaVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho;i++)
        vetor[i] = vetor[i] + 1;
}
