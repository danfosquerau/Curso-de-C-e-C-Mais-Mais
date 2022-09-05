#include <stdio.h>
#include <stdlib.h>
//Biblioteca que fornece a hora do computador
#include <time.h>

void main(){

   //Responsável por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Apenas recebe o número aleatório gerado pelo computador
   int a = rand();
   printf("%d\n",a);

   //Variável que recebe o resto da divisão do número por 3 (aleatório entre 0 e 2)
   int b = rand() % 3;
   printf("%d\n", b);

   //Variável que recebe o resto da divisão do número por 5 (aleatório entre 1 e 5)
   int c = (rand() % 5) + 1;
   printf("%d\n", c);
}
