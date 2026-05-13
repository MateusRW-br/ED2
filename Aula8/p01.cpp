#include <map>
#include <iostream>
using namespace std;

int main(){
    //Chave,valor 
    map<string,float> tabela;
    string nome;
    float preco;
    while(cin>>nome && nome !="exit"){
        cin>>preco;
        tabela[nome] = preco;
        
    }
    for(auto t : tabela){ // First = string, Second = float;
        cout << t.first << " " << t.second << endl;
    }
    return 0;
}