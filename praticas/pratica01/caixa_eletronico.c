#include <stdio.h>
#include <stdlib.h>

void caixa(int valor)
{
    int qnt_notas[7] = {0};
    int vetor[7] = {200, 100, 50, 20, 10, 5, 2};
    if (valor > 1000 || valor == 3)
    {
        return;
    }
    int saque = 0;

    for (int i = 0; i < 7; i++)
    {
        valor / vetor[i];
        while (valor >= vetor[i])
        {
            valor = valor - vetor[i];
            qnt_notas[i]++;
        }
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d de %d\n", qnt_notas[i], vetor[i]);
    }
}

int main()
{

    caixa(100);
    printf("\n");
    caixa(200);
    printf("\n");
    caixa(453);
    printf("\n");

    return 0;
}