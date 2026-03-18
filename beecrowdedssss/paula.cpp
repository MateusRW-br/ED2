#include <iostream>
#include <list>
#include <cctype>
using namespace std;

int main(){
    int Q;
    int dig1, dig2;
    cin >> Q;
    char letra;
    for (size_t i = 0; i < Q; i++)
    {
        string a;
        cin >> a;
        dig1 = a[0] - '0';
        letra = a[1];
        dig2 = a[2] - '0';
        if (isupper(letra) && dig1 != dig2)
        {
            cout << dig2 - dig1 << endl;
        }
        else if (islower(letra) && dig1 != dig2)
        {
            cout << dig1 + dig2 << endl;
            }else{
                cout << dig1 * dig2 << endl;
            }
            
        }
        
    
    


    return 0;
}