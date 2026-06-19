#include <stdio.h>
#include "arvore_binaria.h"

int main() {
    Arvore* raiz = arvore_criar();

    if (arvore_esta_vazia(raiz)) {
        printf("Arvore criada e esta vazia.\n\n");
    }

    raiz = arvore_inserir(raiz, 50);
    raiz = arvore_inserir(raiz, 30);
    raiz = arvore_inserir(raiz, 70);
    raiz = arvore_inserir(raiz, 20);
    raiz = arvore_inserir(raiz, 40);
    raiz = arvore_inserir(raiz, 60);
    raiz = arvore_inserir(raiz, 80);

    printf("Exibindo em Pre-ordem: ");
    arvore_exibir_pre_ordem(raiz);
    printf("\n");

    printf("Exibindo em Ordem: ");
    arvore_exibir_em_ordem(raiz);
    printf("\n");

    printf("Exibindo em Pos-ordem: ");
    arvore_exibir_pos_ordem(raiz);
    printf("\n\n");

    arvore_destruir(raiz);
    printf("Memoria da arvore liberada com sucesso.\n");

    return 0;
}