#include <iostream>
#include <fstream> // lib para manipular arquivos
using namespace std;
int main(){
    int a;
    ifstream arq;
    arq.open("numeros.txt"); // tentando abrir o arquivo 
    if (!arq){ //senao abriu o arquivo, corrompido ou em uso talvez nao sei
        cout << "Arquivo não abriu!" << endl;
        exit(1); // termina a executao do programa
    }
    while(arq >> a){ // enquanto estiver conteudo no arquivo passa para a variavel a
        cout << a * 3 << endl;
    }


    arq.close();// fecha arquivo
    return 0;
}