#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main(){
    ofstream tab;
    tab.open("tabela.txt");
    for(int i=0;i<=100;i++){
        //tab << i << endl;
        tab << dec << i << " " << hex << uppercase << i << endl;
    }
    tab.close();
    return 0;
}