#include <stdio.h>
#include <stdlib.h>
//Biblioteca que fornece a hora do computador
#include <time.h>

void main(){

   //Respons�vel por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Apenas recebe o n�mero aleat�rio gerado pelo computador
   int a = rand();
   printf("%d\n",a);

   //Vari�vel que recebe o resto da divis�o do n�mero por 3 (aleat�rio entre 0 e 2)
   int b = rand() % 3;
   printf("%d\n", b);

   //Vari�vel que recebe o resto da divis�o do n�mero por 5 (aleat�rio entre 1 e 5)
   int c = (rand() % 5) + 1;
   printf("%d\n", c);

}
