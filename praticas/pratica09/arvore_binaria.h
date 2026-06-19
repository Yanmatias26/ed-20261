#ifndef ARVORE_BINARIA_H
#define ARVORE_BINARIA_H

typedef struct no {
    int dado;
    struct no *esq;
    struct no *dir;
} Arvore;

Arvore* arvore_criar();
Arvore* arvore_inserir(Arvore* raiz, int valor);
void arvore_exibir_pre_ordem(Arvore* raiz);
void arvore_exibir_em_ordem(Arvore* raiz);
void arvore_exibir_pos_ordem(Arvore* raiz);
int arvore_esta_vazia(Arvore* raiz);
void arvore_destruir(Arvore* raiz);

#endif