#include <stdio.h>
#include "fila.h"

int main()
{
    Fila *f = criar();

    enfileirar(f, 1);
    enfileirar(f, 8);
    enfileirar(f, 0);

    No *no = f->primeiro;

    fila_exibir(f);

    desenfileirar(f);

    no = f->primeiro;

    fila_exibir(f);

    enfileirar(f, 6);

    no = f->primeiro;

    fila_exibir(f);


    desenfileirar(f);

    no = f->primeiro;
    
    fila_exibir(f);

    desenfileirar(f);

    no = f->primeiro;

    fila_exibir(f);

    printf("\n");

    desenfileirar(f);

    no = f->primeiro;

    fila_exibir(f);

    return 0;
}