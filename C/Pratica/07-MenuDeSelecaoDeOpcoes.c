#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int opcao = 1;

    while(opcao != 0){
        printf("Escolha uma op��o:\n");
        printf("1 - Op��o 1\n");
        printf("2 - Op��o 2\n");
        printf("3 - Op��o 3\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Op��o 1 foi escolhida!\n");
                break;
            case 2:
                printf("Op��o 2 foi escolhida!\n");
                break;
            case 3:
                printf("Op��o 3 foi escolhida!\n");
                break;
            case 0:
                printf("Saindo....\n");
                break;
            default:
                printf("\nOp��o Inv�lida!\n");
                break;
        }
    }

    system("pause");
}
