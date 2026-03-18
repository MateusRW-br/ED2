#include <iostream>
#include <cctype>
#include <fstream>
#include <vector>
using namespace std;
struct palavra
{
    string palavra;
    int count;
};
int main(){
    ifstream arq("clarissa.txt");
    if (!arq) { cout << "Erro ao abrir clarissa.txt\n"; return 1; }
    char ch;
    string word;
    vector<palavra> palavras;
    while (arq.get(ch)){
        if (isalpha(ch)){
            word+=ch;
        }else if (word.size() > 0){

            bool achou = false;
            for (palavra &p : palavras){
                if (p.palavra == word)
                {
                    p.count++;
                    achou = true;
                    break;
                }
            }
            if (!achou)
            {
                palavras.push_back({word, 1});
            }
            word.clear();
        }
    } 

    for (const palavra pal : palavras)
    {
        cout << pal.palavra << " : " << pal.count << endl;
    }
    arq.close();
    return 0;
}