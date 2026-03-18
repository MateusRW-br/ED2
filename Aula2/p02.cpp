// Exemplo de Funções de validação de caracteres da lib cctype

#include <iostream>
#include <cctype>
#include <fstream>
#include <iomanip>
using namespace std;

int main(){
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "Erro ao abrir " << endl;
        return 1;
    }
    char ch;
    int nletras =0, ndig = 0, nspace=0, noutros=0;
    while(arq.get(ch)){
        if(isalpha(ch)){
            nletras++;
        }
        else if (isdigit(ch)) ndig++;
        else if (isspace(ch)) nspace++;
        else{noutros++;}
        
    }
    int ntotal = nletras+ndig+nspace+noutros;
    cout << "Numero total: " << ntotal << endl << fixed << setprecision(2)
     << "Número de letras: " << nletras << " " << nletras * 100/ntotal << "%\n"
     << "Número de digitos: " << ndig << " " << ndig * 100/ntotal << "%\n"
     << "Número de espacos: " << nspace << " " << nspace * 100/ntotal << "%\n"
     << "Número de outros: " << noutros << " " << noutros * 100/ntotal << "%\n";


    arq.close();
    return 0;
}