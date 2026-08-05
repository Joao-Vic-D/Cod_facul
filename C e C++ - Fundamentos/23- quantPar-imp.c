#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 3
int main(){
int n, par, imp;
par = 0;
imp = 0;

for (int i = 0; i < 10; i++){
scanf ("%d", &n);   
 if (n % 2 == 0){
        par++;
    }else{
        imp++;
    }
    
}
printf("Existem %d numeros pares e %d numeros impares\n", par, imp);

    return 0;
}