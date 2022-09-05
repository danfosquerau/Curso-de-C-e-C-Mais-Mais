#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Header string, Necess�rio para usar strings
#include <string>
//Biblioteca de entrada e sa�da para C++
#include <iostream>

/*
Para usar os recursos de entrada e sa�da da biblioteca iostream em C++, � preciso incluir o comando using namespace std.
Este comando serve para definir um "espa�o de nomes", ou namespace. Um namespace permite a defini��o de estruturas, estruturas, classes, fun��es, constantes, etc,
que estar�o vinculadas a ele. Isso evita duplicidade com, por exemplo, outras implementa��es com nomes semelhantes.
Por defini��o, a linguagem C++ utiliza o namespace std para definir todas as fun��es da biblioteca padr�o.
*/
using namespace std;

int main(){
    setlocale(LC_ALL,"");

    /*
    Em C, strings s�o implementadas atrav�s de vetores de caracteres.
    J� em C++ o usu�rio pode empregar a palavra string para declarar uma string de tamanho vari�vel.
    Por�m, deve ser inclu�do o header string. A partir da declara��o, a utiliza��o de strings � simples.
    */

    //Definindo uma String
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra: ";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma vari�vel
    cout << "A palavra � " << palavra << "\n";

    return 0;
}
