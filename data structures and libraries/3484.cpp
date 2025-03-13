#include <iostream>
#include <queue>
#include <vector>
#include <limits>

struct No {
    int valor;
    No* esquerda;
    No* direita;
    No(int v) : valor(v), esquerda(nullptr), direita(nullptr) {}
};

No* inserir(No* raiz, int valor) {
    if (!raiz) return new No(valor);

    if (valor < raiz->valor) {
        raiz->esquerda = inserir(raiz->esquerda, valor);
    } else if (valor > raiz->valor) {
        raiz->direita = inserir(raiz->direita, valor);
    }
    return raiz;
}

void mostrarMenoresPorNivel(No* raiz) {
    if (!raiz) {
        std::cout << "Árvore vazia!" << std::endl;
        return;
    }

    std::vector<int> menores;
    std::queue<std::pair<No*, int>> fila;
    fila.push({raiz, 0});

    while (!fila.empty()) {
        No* atual = fila.front().first;
        int nivel = fila.front().second;
        fila.pop();
        
        if (nivel == menores.size()) {
            menores.push_back(atual->valor);
        } else {
            menores[nivel] = std::min(menores[nivel], atual->valor);
        }

        if (atual->esquerda) fila.push({atual->esquerda, nivel + 1});
        if (atual->direita) fila.push({atual->direita, nivel + 1});
    }

    for (size_t i = 0; i < menores.size(); ++i) {
        std::cout << i << " " << menores[i] << std::endl;
    }
}


int main() {
    int n,v;
    std::cin>>n;
    No *raiz = nullptr;
    for(int i=0;i<n;i++)
    {
        std::cin>>v;
        raiz = inserir(raiz,v);
    }

    mostrarMenoresPorNivel(raiz);
    return 0;
}