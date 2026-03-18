#include <iostream>

using namespace std;

int main(){
    int qtd;
    cin >> qtd;

    int i = 0;
    string a, b;

    while (i < qtd)
    {
        cin >> a >> b;

        int blength = b.length();
        int alength = a.length();

        if (alength >= blength)
        {
            string aUltimos = a.substr(alength - blength); // substr comeca no fim de alength e pega a qtd blength

            if (aUltimos == b)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
        else
        {
            cout << "nao encaixa" << endl;
        }

        i++;
    }

    return 0;
}