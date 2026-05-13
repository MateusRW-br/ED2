//Biblioteca de arvore
#include <string>
#include <algorithm>
#include <queue>
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

    //TODO: Exibe todos os nodos da arvore
    void show(node *root){
        if(!root)
            return; 
        std::cout << root->value << std::endl;       
        show(root->left);
        show(root->right);        
    }

     void show2(node *root, std::string prefixo, int nivel){
        if(!root)
            return; 
            std::cout << std::string(nivel,' ')<<prefixo << root->value << std::endl;       
            show2(root->left,"/",nivel+1);
            show2(root ->right,"\\",nivel+1);
        
    }
    void show_level(node *root, int nivel){
        if(!root)
            return;
        if(nivel == 0){
            std::cout << root->value << ' ';
        }else {
            show_level(root->left, nivel - 1);
            show_level(root->right, nivel - 1);
        }


    }
    void DFS_pre(node *root){ //Percorrer em pré ordem
    if(!root) return;
    std::cout << root->value << ' '; // Exibe o nodo
    DFS_pre(root->left);// chama a função passando o nodo filho a esq
    DFS_pre(root->right);// chama a função passando o nodo filho a dir
}
void DFS_in(node *root){ //Percorrer em in order
    if(!root) return;
    DFS_in(root->left);
    std::cout << root->value << ' ';
    DFS_in(root->right);
}

void DFS_post(node *root){ //Percorrer em post order
    if(!root) return;
    DFS_post(root->left);
    DFS_post(root->right);
    std::cout << root->value << ' ';
}

void BSF(node* root){
    if(!root) return;
    std::queue<node*> fila; // A fila guardará o endereço de memória dos nodos 
    fila.push(root);
    while(!fila.empty()){
        node* aux;
        aux = fila.front();
        std::cout << (aux->value) << " ";
        fila.pop();
        if (aux->left != nullptr){
            fila.push(aux->left);
        }
        if (aux->right != nullptr){
            fila.push(aux->right);
        }
    }
}
//BST - Binary Search Tree
void BST_insert(node* &root,const std::string &val){
    if(!root)
        root = create_node(val);
    else if(root->value > val)
        BST_insert(root->left, val);
    else
        BST_insert(root->right, val);
}
//Pesquisar um valor na bst
//Se encontrar retorna um ponteiro com node se nao nullptr
node* BST_find(node* &root,const std::string &val){
    if(!root || root->value == val) return root;
    if (root->value > val){
        return BST_find(root->left, val);
    }
    if (root->value < val){
        return BST_find(root->right, val);
    }
    return nullptr;
}


}