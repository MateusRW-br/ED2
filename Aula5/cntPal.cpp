#include <iostream>
#include <fstream>
#include <list>
#include <vector>
using namespace std;
struct palcnt{
    string palavra;
    int cnt = 1;
};
const int HASH_SIZE = 97;
list<palcnt> hashtable[HASH_SIZE];

size_t hashfn(const string &str) {
    size_t soma = 0;
    for (auto c : str) soma += (size_t)c;
    return soma % HASH_SIZE;
}
void inserir(palcnt palavra){
    int indice = hashfn(palavra.palavra);
    hashtable[indice].push_back(palavra);
}
palcnt buscar(string palavra){
    int indice = hashfn(palavra);
    for(auto it=hashtable[indice].begin(); it !=hashtable[indice].end(); it++){
        if (it->palavra == palavra)
        {
            return *it;
        }
    }
    return palcnt();
}
void imprimir(){
    for (auto i : hashtable){
        for (auto y : i)
        {
            cout << "Palavra: " << y.palavra << "    Cnt: " << y.cnt << endl;
        }
    }  
}
int main(){
    ifstream arq("palavras.txt");
    if(!arq){
        cout << "Erro ao abrir \n";
        return 1;
    }
    int i = 0;
    char ch;
    string word;
    palcnt palavra;
    while (arq.get(ch)){
        if (isalpha(ch)){
            word+=ch;
        }else if (word.size() > 0){
            int indice = hashfn(word);
            bool achou = false;
            for (palcnt &p : hashtable[indice]){
                if (p.palavra == word)
                {
                    p.cnt++;
                    achou = true;
                    break;
                }
            }
            if (!achou)
            {
                palavra.palavra = word;
                inserir(palavra);
            }
            word.clear();
    
        }
        }
    
     
    string palBuscar;
    cout << "Digite a palavra que deseja buscar: ";
    cin >> palBuscar;
    palcnt palvra = buscar(palBuscar);
    cout << "Quantidade de vezes que aparece: " << palvra.cnt << endl;
    
    arq.close();
    return 0;
}