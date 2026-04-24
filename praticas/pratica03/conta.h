#ifndef conta_h
#define conta_h

struct conta{
    int RG;
    char nome[100];
    char email[100];
    char senha[100];
    float saldo;
};

typedef struct conta Conta;


Conta* conta_criar(int RG,const char *nome, const char *email, const char *senha);
float conta_depositar(Conta *c, float deposito);
float conta_sacar(Conta *c,float saque);
void conta_ver_saldo(Conta *c);
void conta_destruir(Conta *c);


#endif