// Exemplo de tabelas hash utilizando tratramento de colisão pro encadeamento exterior
#include <iostream>
#include <list>

using namespace std;

struct Aluno{
    string nome;
    int matricula;
    string email;
};

#define HASH_TABLE_SIZE 10
list<Aluno> hashtable[HASH_TABLE_SIZE]; // Vetor de tamanho fixo que dentro se inclui list<Aluno>

int hash_function(int matricula){
    return matricula % HASH_TABLE_SIZE;
}

void inserir(Aluno aluno){
    int indice = hash_function(aluno.matricula);
    hashtable[indice].push_back(aluno);
}
Aluno buscar(int matricula){
    int indice = hash_function(matricula);
    for(auto it=hashtable[indice].begin(); it !=hashtable[indice].end(); it++){
        if (it->matricula == matricula)
        {
            return *it;
        }
    }
    return Aluno();
}
void remover(int matricula){
    int indice = hash_function(matricula);
    for(auto it=hashtable[indice].begin(); it !=hashtable[indice].end(); it++){
        if (it->matricula == matricula){
            hashtable[indice].erase(it);
            break;
        }
    }
}
void imprimir(){
    for (auto i : hashtable){
        for (auto y : i)
        {
            cout << "Nome: " << y.nome << "    Matricula: " << y.matricula << "    Email: " << y.email << endl;
        }
        
    }
    
}
int main() {

    Aluno aluno1 = {"Joao Pedru", 123 , "jp@email.com"};
    Aluno aluno2 = {"Joao Carlo", 321 , "jc@email.com"};
    Aluno aluno3 = {"Joao Emanuel", 454 , "je@email.com"};
    Aluno aluno4 = {"Joao Ferdinando", 676 , "jf@email.com"};
    Aluno aluno5 = {"Joao pedrin", 332 , "jp@email.com"};
    Aluno aluno6 = {"Joao padeiro", 333 , "jd@email.com"};
    Aluno aluno7 = {"Joao pedreiro", 433 , "jt@email.com"};
    Aluno aluno8 = {"Joao pazendeiro", 933 , "jf@email.com"};
    inserir(aluno1);
    inserir(aluno2);
    inserir(aluno3);
    inserir(aluno4);
    inserir(aluno5);
    inserir(aluno6);
    inserir(aluno7);
    inserir(aluno8);

    Aluno alunoBuscado = buscar(4444);
    if (alunoBuscado.nome.empty()){
        cout << "Aluno não encontrado!\n";
    }
    else{
        cout << "Aluno Buscado: " << alunoBuscado.nome << endl;
    }
    
    
    

    //imprimir();
    


    return 0;
}