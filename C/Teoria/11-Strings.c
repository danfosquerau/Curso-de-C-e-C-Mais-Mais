#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    /*
    O termo string serve para identificar uma sequência de caracteres.
    Na prática, as strings são usadas para representar textos.
    Em linguagem C, ao contrário de outras linguagens, não existe um tipo de dados string nativo.
    Para representar uma string em C, devemos criar um vetor de caracteres, ou seja um vetor do tipo char, cujo último elemento deve ser um caractere nulo (\0).
    */

    char palavra[10];

    printf("Digite uma palavra: ");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //Lê a String
    fgets(palavra, 255, stdin);

    //Limpa as casas não utilizadas, serve pra economizar memória do sistema
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

}
