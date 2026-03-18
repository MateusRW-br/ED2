#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> fila;
    int qtdPessoas, qtdSair;

    cin >> qtdPessoas;
    for (int i = 0; i < qtdPessoas; i++) {
        int num;
        cin >> num;
        fila.push_back(num);
    }

    cin >> qtdSair;
    for (int i = 0; i < qtdSair; i++) {
        int numSair;
        cin >> numSair;

        for (auto it = fila.begin(); it != fila.end(); ++it) {
            if (*it == numSair) {
                it = fila.erase(it);
                break; 
            }
        }
    }

    for (auto it = fila.begin(); it != fila.end(); ++it) {
        if (it != fila.begin()) cout << " ";
        cout << *it;
    }
    cout << endl;

    return 0;
}