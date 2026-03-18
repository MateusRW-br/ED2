#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream arq("gpl3.txt"); // Acessando direto sem usar .open
    if(!arq){
        cout << "Erro ao abrir o arquivo!\n";
        return 1;
    }
    char ch;

    //while(arq >> ch) -- métoda palavra a palavra
    //while(getline(arq,linha)) -- metado linha a lonha ate o eof

    int cont = 0;
    while(arq.get(ch)){ // Extrai um unico caracter do texto
        cout << ch;
        cont++;
    }
    cout << "Qtd de chars: " << cont << endl;
    arq.close();
    return 0;
}