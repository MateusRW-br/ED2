#include <iostream>
#include <unordered_map>

using namespace std;

int main(){

    unordered_map<int,string> alunos;
    alunos[9090] = "FULANO";
    alunos[1111] = "THEGOAT";
    alunos[2020] = "BABA";

    int matr;
    cout << "Informe a matricula: (0 para sair)\n";
    while (cin >> matr && matr!=0){
        if (alunos.count(matr)>0){
            cout << alunos[matr] << endl;
        }else
            cout << "404 not found!" << endl;
        cout << "size: " << alunos.size() << endl;
    }
        

    return 0;
}