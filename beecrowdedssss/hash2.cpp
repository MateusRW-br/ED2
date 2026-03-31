#include <iostream>
#include <unordered_map>
#include <iomanip> 
using namespace std;
int main(){

    int N;
    cin >> N;

    while (N--) {
        int M;
        cin >> M;

        unordered_map<string, double> precos;
        for (int i = 0; i < M; i++) {
            string produto;
            double preco;
            cin >> produto >> preco;
            precos[produto] = preco;
        }

        int P;
        cin >> P;

        double total = 0.0;
        for (int i = 0; i < P; i++) {
            string produto;
            int quantidade;
            cin >> produto >> quantidade;
            total += precos[produto] * quantidade;
        }

        cout << fixed << setprecision(2);
        cout << "R$ " << total << endl;
    }

    return 0;
}