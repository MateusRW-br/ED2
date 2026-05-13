#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, M;

    while (cin >> N >> M) {
        vector<int> ve(N);

        for (int i = 0; i < N; i++) {
            cin >> ve[i];
        }

        for (int i = 0; i < M; i++) {
            int k, v;
            cin >> k >> v;

            int qtd = 0;
            int indice = 0;

            for (int j = 0; j < N; j++) {
                if (ve[j] == v) {
                    qtd++;
                    if (qtd == k) {
                        indice = j + 1;
                        break;
                    }
                }
            }

            cout << indice << endl;
        }
    }

    return 0;
}