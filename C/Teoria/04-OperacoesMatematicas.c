#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"");

    //Como definir mais de uma variável do mesmo tipo
    int a = 6, b = 3;

    //Soma
    printf("A soma de %d + %d = %d\n",a , b, a + b);

    //Subtração
    printf("A subtração de %d - %d = %d\n",a , b, a - b);

    //Divisão
    printf("A divisão de %d / %d = %d\n",a , b, a / b);

    //Multiplicação
    printf("A multiplicação de %d * %d = %d\n",a , b, a * b);

    //Resto da Divisão
    printf("O resto da divisão entre %d / %d = %d\n",a , b, a % b);

    //Valor Absoluto
    printf("O valor absoluto de -3 = %d\n", abs(-3));

    //Pausa o programa após executar
    system("pause");
}
