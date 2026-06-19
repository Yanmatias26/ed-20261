#include <stdio.h>
#include "lista_linear.h"

int main() {
    Lista lista = lista_criar();

    lista_esta_vazia(lista);

    lista_inserir(lista, 10, 0);
    lista_inserir(lista, 30, 1);
    lista_inserir(lista, 20, 1);
    lista_inserir(lista, 5, 0);
    lista_inserir(lista, 100, 10); 

    lista_exibir(lista);

    lista_buscar(lista, 20);
    lista_buscar(lista, 99);

    lista_remover(lista, 0);
    lista_remover(lista, 1);

    lista_exibir(lista);

    lista_destruir(lista);

    return 0;
}