#include <stdio.h>

//pensar em variaveis, peso altura e imc
// peso e altura <= 0 devolver 0
//calcular mc
//testar

float calcular_imc(float peso, float altura){

    if(peso || altura <=0){
        return 0;
    }
    return peso/(altura*altura);

}

void resultado_visual(float n){
    if(n <18.5){
        printf("abaixo do peso\n");
    } else if(n < 25){
        printf("Peso normal\n");
    } else if(n < 30){
        printf("Sobrepeso");
    } else {
        printf("Obesidade\n");
    }
}


int main(){
 float imc = 1;

 imc = calcular_imc(1.90,70);
 printf("%2.f", imc);
 resultado_visual(imc);

 imc = calcular_imc(0,70);
 printf("%2.f", imc);
 resultado_visual(imc);

 imc = calcular_imc(1.90,20);
 printf("%2.f", imc);
 resultado_visual(imc);

 imc = calcular_imc(1.90,270);
 printf("%2.f", imc);
 resultado_visual(imc);
 
    return 0;
}

