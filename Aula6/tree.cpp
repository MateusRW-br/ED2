//Biblioteca de arvore
#include <string>
#include <algorithm>

namespace tree{
    //struct de cada nodo da árvore
    struct node{
        std::string value; //INFORMAÇÃO
        node *left;  //FILHO DA ESQUERDA
        node *right; //FILHO DA DIREITA
    };

    node *create_node(const std::string &str_value){
        node *p = new node;
        p->value = str_value;
        p->left = nullptr;
        p->right = nullptr;

        return p;
    }
    //Função que retornar o tamanho da árvore
    //root é a raiz
    int height(node *root){
        if(root == nullptr){
            return -1;
        }
       return std::max(height(root->left),height(root->right))+1;
    }
    int moveL = 1;
    int moveR = 1;
    int y = 10;
    void show(node *root){
        std::cout << std::string(y, ' ') << root->value << std::endl;
        if (root->left != nullptr){
            y = 10 - moveL;
            moveL++;
            show(root->left);
        }
        if (root->right != nullptr){
            y = 10 + moveR;
            moveR++;
            show(root->right);
        }

    }

}