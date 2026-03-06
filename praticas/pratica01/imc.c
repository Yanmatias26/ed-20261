#include <stdio.h>

//pensar em variaveis, peso altura e imc
// peso e altura <= 0 devolver 0
//calcular mc
//testar

//float menor(float n){

//    if(n <=0){
//        return 0;
//    }

//}


int main(){

    //variaveis
    float peso = 0;
    float altura = 0;

    printf("Digite seu peso:\n");
    scanf("%f",&peso);
    printf("Digite sua altura:\n");
    scanf("%f",&altura);
    
    //menor(peso);
    //menor(altura);
    if(peso && altura <= 0){
        Printf("0\n");
        return 0;
    }
    float altura2 = altura * altura;
    float imc = peso / altura2;

    if(imc < 18.5){
        printf("peso ideal\n");
    } if(imc >18.5 && imc < 24.9){
        printf("sobrepeso\n");
    } if(imc >= 30.0){
        printf("obesidade\n");
    }
    


    return 0;
}

