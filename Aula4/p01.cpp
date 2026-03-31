#include <unordered_map>
#include <iostream>

using namespace std;

int main(){
    
    unordered_map<string,float> notas;
    notas["beltrano"] = 9.5;
    notas["fulaninho"] = 9.9;
    notas["arthur"] = 6.7;

    //cout << notas["beltrano"] << endl;
    cout << "Tamanho da estrutura: " << notas.size() << endl << endl;

    //Buscar alguma chave que não está presente
    cout << notas["Deivid"] << endl;
    cout << notas["Diego"] << endl;

    cout << "Percorrendo a tabela hash:\n";
    for (auto n : notas)
    {
        cout << n.first << ": " << n.second << endl;
    }
    cout << "Tamanho da estrutura: " << notas.size() << endl << endl;

                                                                                                                                    
    return 0;
}