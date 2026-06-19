#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

Fila *criar(){
    Fila *fila = (Fila *)malloc(sizeof(Fila));

    if(fila == NULL)return NULL;
    fila->primeiro = NULL;
    fila->ultimo = NULL;
    fila->quantidade = 0;
    return fila;
}

void destruir(Fila *fila) {
    if (fila != NULL) {
        No *atual = fila->primeiro;
        No *proximo;
        
        while (atual != NULL) {
            proximo = atual->proximo;
            free(atual);              
            atual = proximo;         
        }
        
        free(fila);
    }
}

void enfileirar(Fila *fila, int valor){
    No *no = (No *)malloc(sizeof(no));
    no->dado = valor;
    no->proximo = NULL;
    if(fila_vazia(fila)){
        fila->primeiro = no;
        fila->ultimo =no;
        fila->quantidade++;
        return;
    }
    fila->ultimo->proximo = no;
    fila->ultimo = no;
    fila->quantidade++;
}

void desenfileirar(Fila *fila){
    if(fila_vazia(fila))
    return;

    No *no = fila->primeiro;
    fila->primeiro = no->proximo;
    fila->quantidade--;
    if(fila_vazia(fila)){
        fila->ultimo = NULL;
    }
    free(no);
}

int fila_vazia(Fila *fila){
    return fila !=NULL && fila->primeiro == NULL;
}

void fila_inicio(Fila *fila) {
    if (fila_vazia(fila)) {
        printf("A fila esta vazia. Nao ha elemento no inicio.\n");
        return;
    }

    // Acessa diretamente o dado do primeiro nó
    printf("Elemento no inicio da fila: %d\n", fila->primeiro->dado);
}

void fila_exibir(Fila *fila) {
    if (fila_vazia(fila)) {
        printf("A fila esta vazia.\n");
        return;
    }

    No *atual = fila->primeiro;
    
    printf("Elementos da fila: ");
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo; // Avança para o próximo nó
    }
    printf("\n");
}