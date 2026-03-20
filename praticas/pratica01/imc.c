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


int main(){
 float imc = 1;

 imc = calcular_imc(1.90,70);
 printf("%2.f", imc);

    return 0;
}

