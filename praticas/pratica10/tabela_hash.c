#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct no_t {
    int valor;
    struct no_t *proximo;
} no_t;

typedef struct {
    no_t **tabela;
    int tamanho;
} hash_t;

int calcular_hash(int valor, int tamanho) {
    return valor % tamanho;
}

hash_t* criar(int tamanho) {
    hash_t *hash = (hash_t*)malloc(sizeof(hash_t));
    if (hash == NULL) return NULL;

    hash->tamanho = tamanho;
    hash->tabela = (no_t**)malloc(sizeof(no_t*) * tamanho);
    memset(hash->tabela, 0, sizeof(no_t*) * tamanho);
    
    return hash;
}

void destruir(hash_t *hash) {
    for (int i = 0; i < hash->tamanho; i++) {
        no_t *atual = hash->tabela[i];
        while (atual != NULL) {
            no_t *temp = atual;
            atual = atual->proximo;
            free(temp);
        }
    }
    free(hash->tabela);
    free(hash);
}

void inserir(hash_t *hash, int valor) {
    int h = calcular_hash(valor, hash->tamanho);
    
    no_t *novo = (no_t*)malloc(sizeof(no_t));
    novo->valor = valor;
    novo->proximo = hash->tabela[h];
    hash->tabela[h] = novo;
}

int buscar(hash_t *hash, int valor) {
    int h = calcular_hash(valor, hash->tamanho);
    no_t *no = hash->tabela[h];
    
    while (no != NULL) {
        if (no->valor == valor) return h;
        no = no->proximo;
    }
    return -1;
}

void remover(hash_t *hash, int valor) {
    int h = calcular_hash(valor, hash->tamanho);
    no_t *atual = hash->tabela[h];
    no_t *anterior = NULL;

    while (atual != NULL) {
        if (atual->valor == valor) {
            if (anterior == NULL) {
                hash->tabela[h] = atual->proximo;
            } else {
                anterior->proximo = atual->proximo;
            }
            free(atual);
            return;
        }
        anterior = atual;
        atual = atual->proximo;
    }
}

void hash_exibir(hash_t *hash) {
    for (int i = 0; i < hash->tamanho; i++) {
        printf("Indice %d: ", i);
        no_t *atual = hash->tabela[i];
        while (atual != NULL) {
            printf("%d -> ", atual->valor);
            atual = atual->proximo;
        }
        printf("NULL\n");
    }
}