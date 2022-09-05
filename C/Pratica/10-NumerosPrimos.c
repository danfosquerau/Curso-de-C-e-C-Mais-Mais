#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    setlocale(LC_ALL,"");

    //Crie um algoritmo que informe se o número lido é primo ou não

    int valor, aux = 1;
    printf("Digite um número para saber se ele é primo: ");
    scanf("%d", &valor);

    if((valor != 0) && (valor != 1)){
        //Ignorei o 1 pois todos os números são divisiveis por ele
        for(int i = 2; i <= valor; i++){
            //Verifica o resto da divisão
            if((valor % i) == 0){
                //Quando o resto da divisão é 0 verifica se o número dividido é por ele mesmo
                //Se não for ele mesmo, quebra o FOR e aciona o auxiliar, informando que não é primo
                if(i != valor){
                    aux = 0;
                    break;
                }
            }
        }
        if(aux == 1){
            printf("O número %d é primo!\n", valor);
        }else{
            printf("O número %d não é primo!\n", valor);
            printf("Os Números Primos são números naturais maiores do que 1 que\npossuem somente dois divisores, ou seja, são divisíveis por 1 e por ele mesmo.\n");
        }
    }else{
        printf("O número %d não é primo!\n", valor);
        printf("Os Números Primos são números naturais maiores do que 1 que\npossuem somente dois divisores, ou seja, são divisíveis por 1 e por ele mesmo.\n");
    }


    /*
    //Código que verifica todos os números até o número desejado
    int cont = 2;

    while(cont < 1000){
        //Ignorei o 1 pois todos os números são divisiveis por ele
        for(int i = 2; i <= cont; i++){
            //Verifica o resto da divisão
            if((cont % i) == 0){
                //Quando o resto da divisão é 0 verifica se o número dividido é por ele mesmo e imprime na tela
                //Se não for ele mesmo, quebra o FOR e segue para o próximo número
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
