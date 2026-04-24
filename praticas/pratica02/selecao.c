#include <stdio.h>
#include "selecao.h"


int buscar_sequencial(int v[], int tam, int valor){
    
    // 0(n)
    for(int i = 0; i < tam; i++){ 
        if(v[i] == valor){
            return i;
        }
    }
    return -1;
}

void troca(int *a, int *b ){
    int aux = *a;
    *a = *b;
    *b = aux;
}
