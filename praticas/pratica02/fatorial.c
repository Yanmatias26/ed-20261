#include <stdio.h>
#include <stdlib.h>
#include <time.h>

unsigned long long fatorial_recursivo(int n){
    unsigned long long resultado = 1;
    if(n == 0){
        return resultado;
    } else {
        resultado = n * fatorial_recursivo(n-1); // O(n)
    }
    return resultado;
}

unsigned long long fatorial_iterativo(int n) {
    unsigned long long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i; // O(n)
    }
    return res;
}

int main(){

    unsigned long long res = 0;

    clock_t inicio = clock();
    res = fatorial_recursivo(5);
    clock_t final = clock();

    double duracao = (double)(final - inicio)/ CLOCKS_PER_SEC;
    printf("O fatoria deu %llu em %.2f\n", res, duracao);

    inicio = clock();
    res = fatorial_recursivo(25);
    final = clock();

    duracao = (double)(final - inicio)/ CLOCKS_PER_SEC;
    printf("O fatoria deu %llu em %f\n", res, duracao);

    inicio = clock();
    res = fatorial_iterativo(25);
    final = clock();

    duracao = (double)(final - inicio)/ CLOCKS_PER_SEC;
    printf("O fatoria deu %llu em %f\n", res, duracao);


    return 0;
}