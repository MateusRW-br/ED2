#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main(){ 
    ifstream arq("gpl3.txt");
    if(!arq){
        cout << "Erro ao abrir \n";
        return 1;
    }
    int cont[256] = {};
    char ch;
    while(arq.get(ch)){
        cont[int(ch)]++;
        //cout << ch << " - " << int(ch) << endl;

    }
    for (int i = 0; i < 256; i++)
    {
        if (cont[i] > 0)
        {
            cout << i << " " << (isprint(i) ? char(i): ' ') << " " << cont[i] << endl;
        }
        
    }
    arq.close(); // Always gotta close the arq
    return 0;
}