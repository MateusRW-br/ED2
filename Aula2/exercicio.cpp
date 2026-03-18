#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;
int main(){
    string nomeArq;
    cout << "Digite o nome do arquivo: ";
    getline(cin,nomeArq); 
    ifstream arq;
    arq.open(nomeArq); 
    if (!arq){ 
        cout << "Arquivo não abriu!" << endl;
        return 1;
    }
    ofstream tab;
    tab.open("contagem_caracteres.csv");
    int cont[256] = {};
    char ch;
    while(arq.get(ch)){
        cont[int(ch)]++;
    }
    for (int i = 0; i < 256; i++)
    {
        if (cont[i] > 0)
        {
            tab << (isprint(i) ? char(i): ' ') << ";" << cont[i] << endl;
        }
        
    }
    tab.close();
    arq.close();
    return 0;
}