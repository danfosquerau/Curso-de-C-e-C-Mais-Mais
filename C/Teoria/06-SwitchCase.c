#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int a = 2;
    char b = 'y';

    //Switch Case, ou traduzindo seria como "Selecione o caso"
    //é uma condicional para casos específicos onde tem algum valor
    //predeterminado, como opções em um menu
    switch(a){
        case 1:
            printf("Opção escolhida: 1\n");
            //Quando entra em algum caso realiza a tarefa o "break" serve para sair do switch
            //sem precisar percorrer o resto
            break;
        case 2:
            printf("Opção escolhida: 2\n");
            break;
        case 3:
            printf("Opção escolhida: 3\n");
            break;
        //o "default" é usado como um caso inválido quando não entra em nenhum outro
        //Não é necessario colocar
        default:
            printf("Opção inválida\n");
            break;
    }

    //Switch com Char
    switch(b){
        case 'x':
            printf("A letra é x\n");
            break;
        default:
            printf("Opção inválida\n");
            break;
    }
}
