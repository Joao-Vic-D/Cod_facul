#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define TAM 3
int main(){
int a, b, c, soma;
float media;
printf("Digite o primeiro valor: ");
scanf("%d", &a);
printf("Digite o segundo valor: ");
scanf("%d", &b);
printf("Digite o terceiro valor: ");
scanf("%d", &c);
soma = a + b + c;
printf("A soma dos valores eh: %d \n", soma);
if((a == 0 && b == 0) || (a == 0 && c == 0) || (b == 0 && c == 0)){
    media = soma;
    printf("A media dos valores eh: %.2f", media);
}else if (a == 0 || b == 0 || c == 0){
    media = soma / 2.0;
    printf("A media dos valores eh: %.2f", media);
}else {
    media = soma / 3.0;
    printf("A media dos valores eh: %.2f", media);
}


return 0;
}