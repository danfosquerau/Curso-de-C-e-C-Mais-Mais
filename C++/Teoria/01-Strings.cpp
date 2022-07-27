#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//Header string, Necessário para usar strings
#include <string>
//Biblioteca de entrada e saída para C++
#include <iostream>

/*
Para usar os recursos de entrada e saída da biblioteca iostream em C++, é preciso incluir o comando using namespace std.
Este comando serve para definir um "espaço de nomes", ou namespace. Um namespace permite a definição de estruturas, estruturas, classes, funções, constantes, etc,
que estarão vinculadas a ele. Isso evita duplicidade com, por exemplo, outras implementações com nomes semelhantes.
Por definição, a linguagem C++ utiliza o namespace std para definir todas as funções da biblioteca padrão.
*/
using namespace std;

int main(){
    setlocale(LC_ALL,"");

    /*
    Em C, strings são implementadas através de vetores de caracteres.
    Já em C++ o usuário pode empregar a palavra string para declarar uma string de tamanho variável.
    Porém, deve ser incluído o header string. A partir da declaração, a utilização de strings é simples.
    */

    //Definindo uma String
    string palavra;

    //Imprimindo na tela
    cout << "Digite uma palavra";

    //Lendo uma string
    cin >> palavra;

    //Imprimindo uma variável
    cout << "\nA palavra é:" << palavra;

    return 0;
}
