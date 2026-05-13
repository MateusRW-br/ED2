#include <iostream>
#include <queue>
#include "../Aula6/tree.cpp"
using namespace std;
using namespace tree;


int main(){
    node *root = create_node("A");
    root->left = create_node("B");
    root->left->left = create_node("D"); 
    root->left->left->left = create_node("G");
    root->right = create_node("C");
    root->right->left = create_node("E");
    root->right->right = create_node("F");
    root->right->left->left = create_node("H");
    root->right->left->right = create_node("I");
    queue<node*> fila;
    node* aux;
    fila.push(root);
    while (!fila.empty())
    {
        aux = fila.front();
        cout << (aux->value);
        fila.pop();
        if (aux->left != nullptr){
            fila.push(aux->left);
        }
        if (aux->right != nullptr){
            fila.push(aux->right);
        }
    }
    
    cout << endl;
    return 0;
}   