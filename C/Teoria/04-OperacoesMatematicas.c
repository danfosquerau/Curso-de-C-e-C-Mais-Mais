#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Como definir mais de uma vari�vel do mesmo tipo
    int a = 6, b = 3;

    //Soma
    printf("A soma de %d + %d = %d\n",a , b, a + b);

    //Subtra��o
    printf("A subtra��o de %d - %d = %d\n",a , b, a - b);

    //Divis�o
    printf("A divis�o de %d / %d = %d\n",a , b, a / b);

    //Multiplica��o
    printf("A multiplica��o de %d * %d = %d\n",a , b, a * b);

    //Resto da Divis�o
    printf("O resto da divis�o entre %d / %d = %d\n",a , b, a % b);

    //Valor Absoluto
    printf("O valor absoluto de -3 = %d\n", abs(-3));

    //Pausa o programa ap�s executar
    system("pause");
}
