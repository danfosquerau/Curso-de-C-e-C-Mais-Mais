#include <stdio.h>
#include <stdlib.h>
/*Uma constante � uma informa��o que nunca ira mudar seu valor
geralmente seu nome � tudo em mai�sculo
Declarando uma constante
*/
#define TAM 10

void main(){
    printf("%d\n\n", TAM);

    for(int i = 0; i <= TAM; i++){
        printf("%d\n", i);
    }
}
