#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    string linha;

    getline(cin, linha); 

    for (int i = 0; i < n; i++) {
        map<string, int> freq;
        int total = 0;

      
        while (getline(cin, linha) && linha.empty());

    
        do {
            freq[linha]++;
            total++;
        } while (getline(cin, linha) && !linha.empty());

         

        for (auto &p : freq) {
            double perc = (p.second * 100.0) / total;
            cout << fixed << setprecision(4) << p.first << " " << perc << "\n";
        }

        if (i != n - 1) cout << "\n";
    }

    return 0;
}