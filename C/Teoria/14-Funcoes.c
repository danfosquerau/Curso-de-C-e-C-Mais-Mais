#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

/*
De padr�o na programa��o em C ou C++ � realizada a declara��o das fun��es antes da Fun��o principal do programa o "int main()"
na declara��o � informada o tipo de retorno, nome da fun��o e os par�metros, essa declara��o serve para que o compilador entenda que
existe essa fun��o dentro do programa quando a fun��o for chamada dentro da fun��o principal ou qualquer outra,
ou pode ser feita tamb�m a defini��o da mesma, ou seja, as intru��es e linhas do c�digo da fun��o
p�rem de pr�tica � realizada as declara��es das fun��es antes da fun��o principal e ap�s realizada as defini��es
*/

//Declara��o e defini��o
//Fun��o sem par�metro e sem retorno
void desenhaBorda(){
     printf("|--------------------------------------------|\n");
}

//Apenas declara��o
int retornaDez();
float retornaQuebrado();
char retornaLetra();
bool retornaBooleano();
void limparTela();

//Fun��es com par�metros
void mostraSucessor(int numero);
int retornaAntecessor(int numero);
void mostraSoma(int primeiroValor, int segundoValor);
int retornaSoma(int primeiroValor, int segundoValor);
int retornaComMaisDez(int numero);

//Fun��es usando ponteiro como par�metro
void aumentaDez(int *numero);

/*
Fun��es usando vetores como par�metro
Em C ou C++ n�o passamos realmente o vetor como par�metro,
� passado no lugar um ponteiro para identificar o vetor
*/
void imprimeVetor(int *vetor, int tamanho);
void modificaVetor(int *vetor, int tamanho);

//Fun��o principal
void main(){
    setlocale(LC_ALL,"");

    /*
    Uma fun��o � um bloco de c�digo que executa alguma opera��o. Opcionalmente, uma fun��o pode definir par�metros de entrada que
    permitem que os chamadores passem argumentos para a fun��o. Opcionalmente, uma fun��o pode retornar um valor como sa�da.
    As fun��es s�o �teis para encapsular opera��es comuns em um �nico bloco reutiliz�vel,
    idealmente com um nome que descreve claramente o que a fun��o faz.
    Na pr�tica tudo em C++ � uma fun��o, at� a pr�pria int main(void) � uma fun��o.
    */

    printf("Hi\n");

    //Chamando a Fun��o
    desenhaBorda();




    int a;
    //Passando o retorno de uma fun��o para uma vari�vel
    a = retornaDez();
    printf("Retorno da Fun��o do Tipo \"Int\": %d\n", a);
    //Para poder usar aspas duplas no texto usa
    //o caractere "\" barra invertida serve para tirar a propriedade de um caractere especial.

    float b;
    b = retornaQuebrado();
    printf("Retorno da Fun��o do Tipo \"Float\": %.2f\n", b);

    char letra;
    letra = retornaLetra();
    printf("Retorno da Fun��o do Tipo \"Char\": %c\n", letra);

    if(retornaBooleano()){
        printf("Retorno da Fun��o do Tipo \"Booleana\": Verdadeiro!\n");
    }
    else{
        printf("Retorno da Fun��o do Tipo \"Booleana\": Falso!\n!");
    }



    system("pause");

    limparTela();




    //Fun��es com par�metros
    printf("Digite um valor: ");
    scanf("%d", &a);
    mostraSucessor(a);
    printf("O antecessor de %d � %d\n", a, retornaAntecessor(a));

    a = 5;
    int c = 7;
    mostraSoma(a,c);
    printf("A soma entre %d e %d � %d\n", a,c,retornaSoma(a,c));

    printf("%d\n", a);
    a = retornaComMaisDez(a);
    printf("%d\n", a);
    //Fun��es usando ponteiro como par�metro
    //Passando ponteiro como par�metro
    aumentaDez(&a);
    printf("%d\n", a);




    //Fun��es usando vetores como par�metro
    int v[3] = {1,2,3};
    imprimeVetor(v, 3);
    modificaVetor(v, 3);
    imprimeVetor(v, 3);
}

//Na defini��o � preciso declarar novamente a fun��o
//Fun��es com retornos
int retornaDez(){
    int numero = 10;
    return numero;
}
float retornaQuebrado(){
    return 5.5;
}
char retornaLetra(){
    //Em fun��es com retornos do tipo char pode tamb�m utilizar n�meros inteiros como retorno, pois ele ir� utilizar
    //a tabela ASCII para realizar a convers�o para algum caractere, pois todo caractere tem um n�mero inteiro correspondente
    return 'x';
}
bool retornaBooleano(){
    return true;
}
void limparTela(){
    //Comando para limpar a tela
    system("CLS");
}




//Fun��es com par�metros
void mostraSucessor(int numero){
    printf("O sucessor de %d � %d\n", numero, numero + 1);
}
int retornaAntecessor(int numero){
    return numero - 1;
}
void mostraSoma(int primeiroValor, int segundoValor){
    printf("A soma entre %d e %d � %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}
int retornaSoma(int primeiroValor, int segundoValor){
    return primeiroValor + segundoValor;
}
int retornaComMaisDez(int numero){
    return numero + 10;
}




//Fun��es usando ponteiro como par�metro
void aumentaDez(int *numero){
    *numero = *numero + 10;
}




//Fun��es usando vetores como par�metro
void imprimeVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho;i++)
        printf("%d\n",vetor[i]);
}

void modificaVetor(int *vetor, int tamanho){
    for(int i = 0; i < tamanho;i++)
        vetor[i] = vetor[i] + 1;
}
