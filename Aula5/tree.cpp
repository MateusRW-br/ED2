#include <string>
#include <algorithm>

namespace tree{
    struct node{
        std::string value; // Informação
        node *left; // Filho da esquerda
        node *right; // Filho da direita
    };
    node *create_node(const std::string &str_value){
        node *p = new node;
        p->value = str_value;
        p->left = nullptr;
        p->right = nullptr;
        return p;
    }
    int height(node *root){
        if (root == nullptr){
            return -1;
        }
        return std::max(height(root->left),height(root->right))+1;
    }
}

int main(){
    
    return 0;
}