#include <stdio.h>
#include <stdlib.h>
//Biblioteca para permitir o uso de acentos
#include <locale.h>

void main(){
    //Comando necessário para permitir o uso de acentos
    //Altera a liguagem do console para o padrão do windows
    //No caso para o Português
    setlocale(LC_ALL,"");
    printf("Olá, Mundo!\n");
}
