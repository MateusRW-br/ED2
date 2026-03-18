#include <stdio.h>
#include <iostream>
using namespace std;
int main() {
    int dias;
    cin >> dias;
    int anos = dias/365;
    dias = dias - anos * 365;
    int meses = dias/30;
    dias = dias - meses * 30;
    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << dias << " dia(s)" << endl;
    
    
    return 0;
}