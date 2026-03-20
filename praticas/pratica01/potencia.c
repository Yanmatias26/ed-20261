#include <stdio.h>

double potencia(int n, int p)
{
    double cont = 1;

    if (p < 0)
    {
        return 0;
    }

    for (int i = 0; i < p; i++)
    {
        cont = cont * n;
    }
    return cont;
}

int main()
{
    double pote;

    pote = potencia(2, 5);
    printf("%0.f\n", pote);
    pote = potencia(0, 0);
    printf("%0.f\n", pote);
    pote = potencia(2, -2);
    printf("%0.f\n", pote);

    return 0;
}