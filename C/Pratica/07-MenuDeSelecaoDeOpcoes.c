#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    int opcao = 1;

    while(opcao != 0){
        printf("Escolha uma opção:\n");
        printf("1 - Opção 1\n");
        printf("2 - Opção 2\n");
        printf("3 - Opção 3\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Opção 1 foi escolhida!\n");
                break;
            case 2:
                printf("Opção 2 foi escolhida!\n");
                break;
            case 3:
                printf("Opção 3 foi escolhida!\n");
                break;
            case 0:
                printf("Saindo....\n");
                break;
            default:
                printf("\nOpção Inválida!\n");
                break;
        }
    }

    system("pause");
}
