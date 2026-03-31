#include <iostream>
#include <unordered_map>
#include <list>

using namespace std;

int main(){    
    int N, M, C;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> M >> C;
        unordered_map<int, list<int>> hashtable;
        for (int j = 0; j < C; j++)
        {
            int chave;
            cin >> chave;
            int indice = chave % M;
            hashtable[indice].push_back(chave);
        }
        for (int k = 0; k < M; k++)
        {
            cout << k << " -> ";
            for (auto chave : hashtable[k])
            {
                cout << chave << " -> ";
            }
            cout << "\\" << endl; 
        }

        if (i < N - 1)
            cout << endl;
    }
    return 0;
}