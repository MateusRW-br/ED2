#include <iostream>
#include <string>
using namespace std;

int main () {
    int i;
    cin >> i;
    while (i>0)
    {
        string input;
        cin >> input;
        int s = input.size();
        int count = 0;
        for (int j=0; j < s; j++)
        {
            if (input[j] == '<')
            {
                input.erase(j, 1);
                s--;
                for (int k=j; k < s; k++)
                {
                    if (input[k] == '>') {
                        count++;
                        input.erase(k, 1);
                        s--;
                        break;
                    
                    }
                }
            }
        }
        cout << count << endl;
        i--;
    
    }
    return 0;
}