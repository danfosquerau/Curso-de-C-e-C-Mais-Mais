#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    /*
    O termo string serve para identificar uma sequ�ncia de caracteres.
    Na pr�tica, as strings s�o usadas para representar textos.
    Em linguagem C, ao contr�rio de outras linguagens, n�o existe um tipo de dados string nativo.
    Para representar uma string em C, devemos criar um vetor de caracteres, ou seja um vetor do tipo char, cujo �ltimo elemento deve ser um caractere nulo (\0).
    */

    char palavra[10];

    printf("Digite uma palavra: ");

    //Limpa o Buffer
    setbuf(stdin, 0);

    //L� a String
    fgets(palavra, 255, stdin);

    //Limpa as casas n�o utilizadas, serve pra economizar mem�ria do sistema
    palavra[strlen(palavra)-1] = '\0';

    //Imprime na tela
    printf("%s\n", palavra);

}
