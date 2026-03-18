// Exemplo utilizando o unordered_set

#include <iostream>
#include <unordered_set>
using namespace std;

int main(){

    unordered_set<string> alunos;
    alunos.insert("Fulano");
    alunos.insert("Filino");
    alunos.insert("Felino");
    cout << alunos.size() << endl;
    for(auto aluno : alunos){
        cout << aluno << endl;
    }
    if (alunos.find("Fulano") != alunos.end()){
        cout << "Está no container\n";
    }else
        cout << "Não está no container\n";
    
 
 
    return 0;
}