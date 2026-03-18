#include <iostream>
#include <fstream> // lib para manipular arquivos
using namespace std;
int main(){
    int a;
    string nomeArq;
    cout << "Digite o nome do arquivo: ";
    getline(cin,nomeArq); 
    ifstream arq;
    arq.open(nomeArq); // tentando abrir o arquivo 
    //arq.open("input/"+nomeArq);
    if (!arq){ //senao abriu o arquivo, corrompido ou em uso talvez nao sei
        cout << "Arquivo não abriu!" << endl;
        exit(1); // termina a executao do programa
    }

    string linha;
    while(getline(arq,linha)){ // enquanto estiver conteudo no arquivo passa para a variavel a
        cout << linha << endl;
    }


    arq.close();// fecha arquivo
    return 0;
}