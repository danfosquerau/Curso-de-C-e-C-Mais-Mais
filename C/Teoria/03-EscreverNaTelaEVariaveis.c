#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Biblioteca para manipular variáveis lógicas, como verdadeiro e falso
#include <stdbool.h>

void main(){
    setlocale(LC_ALL,"");

    //Forma simples apenas texto
    //"\n" serve para quebra de linha na tela
    printf("Oi, Galera!\n");

    //Declarado variáveis
    int i;
    float f;
    char s;

    //Variável do tipo bool ou Boolean serve para sim(true) ou nao(false)
    bool binario = true;

    //Declaração de variável do tipo int(números inteiros) com atribuição de um valor fixo
    int a = 5;

    //Alterar o valor da variável;
    a = 10;

    //Escrever na tela o valor de uma variável inteira
    //Para identificar aonde será ixibido o valor da variável
    //utiliza-se "%d" para variável do tipo int
    printf("%d\n", a);

    //Escreve na tela texto e o valor da variável
    printf("O valor da variável \"a\" é %d\n", a);

    int d = 2;

    //Adicionando ao texto o valor de mais de uma variável
    printf("O valor da variável \"a\" é %d e da variável \"d\" é %d\n", a, d);

    //Ler comando do teclado e atribuir a uma variável
    //Usa-se "&" antes do nome da variável para identificar o
    //endereço de memória utilizada pela variável
    printf("Digite um número para a variável \"a\": ");
    scanf("%d", &a);
    printf("O valor da variável \"a\" mudou para %d\n", a);


    //Declaração de variável do tipo float, números quebrados
    //Para números quebrados utiliza-se "." no código
    //Alterando a linguagem para Português usando setlocale(),
    //pode-se usar "," para informar valor na execução
    float b = 5.5;

    //Para identificar aonde será ixibido o valor da variável
    //utiliza-se "%f" para variável do tipo float
    printf("O valor da variável \"b\" é %f\n", b);
    printf("Digite um número para a variável \"b\": ");
    scanf("%f", &b);
    printf("O valor da variável \"b\" mudou para %f\n", b);


    //Declaração de variável do tipo char, apenas uma letra
    //Usa-se '' aspas simples para o conteúdo da variável
    char c = 'c';

    //Para identificar aonde será ixibido o valor da variável
    //utiliza-se "%c" para variável do tipo char
    printf("O conteúdo da variável \"c\" é %c\n", c);

    //Limpar o buffer, resíduos na memória temporária de leitura
    fflush(stdin);
    printf("Digite uma letra para a variável \"c\": ");
    scanf("%c", &c);
    printf("O contéudo da variável \"c\" mudou para %c\n", c);
}
