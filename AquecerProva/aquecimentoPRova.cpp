#include <iostream>
#include <iomanip>
#include <fstream> // lib para manipular arquivos
using namespace std;
int main(){
    int a;
    string nomeArq;
    getline(cin,nomeArq);   
    ifstream arq;
    arq.open(nomeArq); // tentando abrir o arquivo 
    if (!arq){ //senao abriu o arquivo, corrompido ou em uso talvez nao sei
        cout << "Arquivo não abriu!" << endl;
        exit(1); // termina a executao do programa
    }
    char ch;
    double letras, digitos, total;
    letras = digitos = 0;
    while (arq.get(ch))
    {
        if (isalpha(ch))
        {
            letras++;
        }else
        digitos++;      
    }
    
    total = digitos + letras;
    float porcentoLetras = letras * 100 / total;
    float porcentoDigitos = digitos * 100 / total;
    cout << "Porcentagem letras: " << fixed << setprecision(1) << porcentoLetras << endl;
    cout << "Porcentagem digitos: " << fixed << setprecision(1) << porcentoDigitos << endl;

    arq.close();// fecha arquivo
    return 0;
}