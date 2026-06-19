#include <stdio.h>
#include "pilha.h"

int main(){

    Pilha *p = criar();

    empilhar(p, 1);
    empilhar(p, 8);
    empilhar(p, 0);

    pilha_exibir(p);
    
    printf("\n");
    desempilhar(p);
    empilhar(p, 6);
    pilha_exibir(p);

    printf("\n");
    desempilhar(p);
    desempilhar(p);

    pilha_exibir(p);
    printf("\n");

    destruir(p);

    return 0;
}