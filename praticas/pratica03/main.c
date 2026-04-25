#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conta.h"

Conta conta[100];
int total = 0;

int main(){

    //conta_criar(int RG,const char *nome, const char *email, const char *senha);
    conta_criar(1313131);
    //conta_depositar(Conta *c, float deposito);
    conta_depositar(conta,1000.50);
    conta_ver_saldo(conta);
    //conta_sacar(Conta *c,float saque);
    conta_sacar(conta, 500.50);
    //conta_ver_saldo(Conta *c);
    conta_ver_saldo(conta);
    conta_sacar(conta, 2000);
    conta_ver_saldo(conta);
    //conta_destruir(Conta *c);

    return 0;
}