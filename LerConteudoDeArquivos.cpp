#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <ofstream>

using namespace std;

int main(){

ifstream input("Vocabulario.txt");

    //String que receber� o texto lido
    string textoLido;

    //Passa o texto do arquivo para a string
    for(string line; getline(input, line);){
        textoLido += line;
    }

    //Mostrar o conte�do
    cout << textoLido;

    return 0;


}
