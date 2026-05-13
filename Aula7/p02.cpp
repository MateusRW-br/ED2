//Teste de inserção binario de pesquisa
#include <iostream>
#include "tree.cpp"
using namespace tree;
using namespace std;


int main(){
    node* root = nullptr;
    string val;
    while(cin >> val && val!="exit"){
        if (BST_find(root, val)){
            cout << "Já inserido" << endl;
        }
        else
            BST_insert(root, val);
        
        
    }
    //show2(root, "!", 0);
    BSF(root);
    return 0;
}