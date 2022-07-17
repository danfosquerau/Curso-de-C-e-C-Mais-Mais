#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que informe se o n�mero lido � primo ou n�o

    int valor, aux = 1;
    printf("Digite um n�mero para saber se ele � primo:");
    scanf("%d", &valor);

    if((valor != 0) && (valor != 1)){
        //Ignorei o 1 pois todos os n�meros s�o divisiveis por ele
        for(int i = 2; i <= valor; i++){
            //Verifica o resto da divis�o
            if((valor % i) == 0){
                //Quando o resto da divis�o � 0 verifica se o n�mero dividido � por ele mesmo
                //Se n�o for ele mesmo, quebra o FOR e aciona o auxiliar, informando que n�o � primo
                if(i != valor){
                    aux = 0;
                    break;
                }
            }
        }
        if(aux == 1){
            printf("O n�mero %d � primo!\n", valor);
        }else{
            printf("O n�mero %d n�o � primo!\n", valor);
        }
    }else{
        printf("O n�mero %d n�o � primo!\n", valor);
        printf("Os N�meros Primos s�o n�meros naturais maiores do que 1 que\npossuem somente dois divisores, ou seja, s�o divis�veis por 1 e por ele mesmo.\n");
    }


    /*
    //C�digo que verifica todos os n�meros at� o n�mero desejado
    int cont = 2;

    while(cont < 1000){
        //Ignorei o 1 pois todos os n�meros s�o divisiveis por ele
        for(int i = 2; i <= cont; i++){
            //Verifica o resto da divis�o
            if((cont % i) == 0){
                //Quando o resto da divis�o � 0 verifica se o n�mero dividido � por ele mesmo e imprime na tela
                //Se n�o for ele mesmo, quebra o FOR e segue para o pr�ximo n�mero
                if(i != cont){
                    break;
                }else{
                    printf("%d\n", cont);
                }
            }
        }
        count ++;
    }
    */
}
