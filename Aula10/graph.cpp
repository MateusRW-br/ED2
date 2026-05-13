/// Biblioteaca para grafos 
#include <string>
#include <unordered_map>
#include <vector>
#include <fstream>
#include <cstdlib>
#include <iostream>
namespace graph{
    class digraph{ 
        private:
            // Vertices - node é no caso vertice 
            struct node{
                std::string value; // valor
                std::vector<node*> links; // lista de pointer para vertices vizinhos
            };
            //tabela hash, que mapeia o rotulo do no para o objeto node
            std::unordered_map<std::string,node> nodes;
        public:
            // insere um novo nó no grafo com o rótulo s
            void insert_nodo(const std::string& s){
                node aux;
                aux.value = s;
                nodes[s] = aux;
            }
            //retorna a quantidade de nos(vertices) do grafo
            size_t size(){
                return nodes.size();
            }
        }; /// fim da classe digraph

}// end namespace

