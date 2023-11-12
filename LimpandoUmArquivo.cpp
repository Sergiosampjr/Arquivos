#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>

int main(){

//Cria o objeto do arquivo
    ofstream meuArquivo;

    //Abre o arquivo
    meuArquivo.open("Vocabulario.txt");

    //Esvazia o arquivo
    meuArquivo << "";

    //Fecha o arquivo
    meuArquivo.close();

    return 0;


}
