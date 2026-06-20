#include <stdio.h>
#include "tabela_hash.h"

int main() {
    int tam = 10;
    TabelaHash *t = criar(tam);

    inserir(t, 5);
    inserir(t, 15);
    inserir(t, 25);
    inserir(t, 8);
    inserir(t, 2);

    printf("Tabela apos insercoes:\n");
    hash_exibir(t);

    printf("\nBuscando valor 15: %s\n", (buscar(t, 15) != -1 ? "Encontrado" : "Nao encontrado"));

    printf("\nRemovendo valor 15...\n");
    remover(t, 15);

    printf("Tabela apos remocao:\n");
    hash_exibir(t);

    destruir(t);

    return 0;
}