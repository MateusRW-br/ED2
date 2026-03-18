#include <iostream>
#include <algorithm>
using namespace std;

struct entrada {
    string nome;
    char regiao;
    int dist;
};

bool ordena (entrada a, entrada b) {
    if (a.dist != b.dist) {
        return a.dist < b.dist;
    }
    else if (a.regiao != b.regiao) {
        return a.regiao < b.regiao;
    }
    else {
        return a.nome < b.nome;
    }
}
int main () 
{
    int size;
    while(cin >> size)
    {
        entrada l[size];
        for(int j=0; j < size; j++)
        {
            entrada e;
            cin >> e.nome;
            cin >> e.regiao;
            cin >> e.dist;
            l[j] = e;
        }
        sort(l, l + size, ordena);
        for (int k=0; k < size; k++)
        {
            cout << l[k].nome << endl;
        }
    }
    return 0;
}