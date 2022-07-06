#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 2;
    char b = 'y';

    //Switch Case, ou traduzindo seria como "Selecione o caso"
    //� uma condicional para casos espec�ficos onde tem algum valor
    //predeterminado, como op��es em um menu
    switch(a){
        case 1:
            printf("Op��o escolhida: 1\n");
            //Quando entra em algum caso realiza a tarefa o "break" serve para sair do switch
            //sem precisar percorrer o resto
            break;
        case 2:
            printf("Op��o escolhida: 2\n");
            break;
        case 3:
            printf("Op��o escolhida: 3\n");
            break;
        //o "default" � usado como um caso inv�lido quando n�o entra em nenhum outro
        //N�o � necessario colocar
        default:
            printf("Op��o inv�lida\n");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("A letra � x\n");
            break;
        default:
            printf("Op��o inv�lida\n");
            break;
    }
}
