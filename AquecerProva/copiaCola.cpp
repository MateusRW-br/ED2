#include <iostream>
#include <iomanip>
#include <fstream> // lib para manipular arquivos
#include <vector>
using namespace std;
int main(){
    int a;
    string nomeArq1;
    string nomeArq2;
    getline(cin,nomeArq1);
    getline(cin,nomeArq2);  
    ifstream arq1;
    ofstream arq2;
    arq1.open(nomeArq1); // tentando abrir o arquivo 
    if (!arq1){ //senao abriu o arquivo, corrompido ou em uso talvez nao sei
        cout << "Arquivo não abriu!" << endl;
        exit(1); // termina a executao do programa
    }
    char ch;
    int qtdChar = 0;
    string strChar;
    while (arq1.get(ch))
    {
        if (!isspace(ch))
        {
            strChar+=ch;
            qtdChar++;
        }
        
    }
    arq2.open(nomeArq2);
    arq2 << strChar;

    cout << "Qtd char copiados: " << qtdChar << endl;

    arq1.close();// fecha arquivo
    arq2.close();// fecha arquivo
    return 0;
}