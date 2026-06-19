#include <stdio.h>
#include <stdlib.h>
#include "arvore_binaria.h"

Arvore* arvore_criar() {
    return NULL;
}

Arvore* arvore_inserir(Arvore* raiz, int valor) {
    if (raiz == NULL) {
        Arvore* novo = (Arvore*)malloc(sizeof(Arvore));
        if (novo == NULL) return NULL;
        novo->dado = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        return novo;
    }
    
    if (valor < raiz->dado) {
        raiz->esq = arvore_inserir(raiz->esq, valor);
    } else if (valor > raiz->dado) {
        raiz->dir = arvore_inserir(raiz->dir, valor);
    }
    
    return raiz;
}

void arvore_exibir_pre_ordem(Arvore* raiz) {
    if (raiz != NULL) {
        printf("%d ", raiz->dado);
        arvore_exibir_pre_ordem(raiz->esq);
        arvore_exibir_pre_ordem(raiz->dir);
    }
}

void arvore_exibir_em_ordem(Arvore* raiz) {
    if (raiz != NULL) {
        arvore_exibir_em_ordem(raiz->esq);
        printf("%d ", raiz->dado);
        arvore_exibir_em_ordem(raiz->dir);
    }
}

void arvore_exibir_pos_ordem(Arvore* raiz) {
    if (raiz != NULL) {
        arvore_exibir_pos_ordem(raiz->esq);
        arvore_exibir_pos_ordem(raiz->dir);
        printf("%d ", raiz->dado);
    }
}

int arvore_esta_vazia(Arvore* raiz) {
    return raiz == NULL;
}

void arvore_destruir(Arvore* raiz) {
    if (raiz != NULL) {
        arvore_destruir(raiz->esq);
        arvore_destruir(raiz->dir);
        free(raiz);
    }
}