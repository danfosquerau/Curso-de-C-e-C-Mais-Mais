#include <stdio.h>
#include <stdlib.h>
/*Uma constante é uma informação que nunca ira mudar seu valor
geralmente seu nome é tudo em maiúsculo
Declarando uma constante
*/
#define TAM 10

void main(){
    printf("%d\n\n", TAM);

    for(int i = 0; i <= TAM; i++){
        printf("%d\n", i);
    }
}
