#include <stdio.h>
#include "agenda.h"



Agenda criar_agenda(int tamanho){
    Agenda a;
    a.tamanho = tamanho;
    a.quantidade = 0;
    return a;

}
void adicionar_contato(Agenda *agenda, Contato contato){
    if(agenda->tamanho == agenda->quantidade){
        printf("Agneda lotada\n");
        return;
    }
    agenda->contatos[agenda->quantidade] = contato;
    agenda->quantidade++;

}
void listar_contato(Agenda *agenda){
    if(agenda->quantidade == 0){
        printf("Agenda vazia\n");
        return;
    }
    for(int i =0;i<agenda->quantidade;i++){
        printf("%s - %s\n",agenda->contatos[i].nome, agenda->contatos[i].telefone);
    }

}
