#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int tam = 10;





void prencher_matriz(int mat[10][10], int tamanho){
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
        mat[i][j] = i + j;}
    }


}


void prencher_matriz1for(int mat[10][10],int tamanho){
    int *p = &mat[0][0];
    for(int i = 0; i < tamanho * tamanho; i++){
            *p = i;
            p++;
    }


}


void mostrar_matriz(int mat[10][10]){
     for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            printf("%d,", mat[i][j]);
        }
        printf("\n");
       
    }


}




int main(){
    int mat[tam][tam];
    clock_t inicio = clock();
    prencher_matriz(mat,tam);
    clock_t final = clock();
    double duracao = (double)(final - inicio)/ CLOCKS_PER_SEC;
    printf("demorou para prencher a matriz %f\n",duracao);

    mostrar_matriz(mat);
    inicio = clcok();
    prencher_matriz1for(mat,tam);
    final = clock();
    double duracao = (double)(final - inicio)/ CLOCKS_PER_SEC;
    printf("demorou para prencher a matriz %f\n",duracao);

    printf("\n");
    mostrar_matriz(mat);


    return 0;
}

