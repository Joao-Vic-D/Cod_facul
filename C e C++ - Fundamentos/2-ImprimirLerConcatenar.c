#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL, "brazilian-portuguese");

    int a = 10; 
    float b = 2.7;

    printf("\n Olá, o valor de a é %d e o valor de b é %.1f", a, b);
    scanf("%d", &a);
    printf("\n Agora o valor de a mudou para %d, e o valor de b continua %.1f", a, b); 

    //Pausando
    system("pause");

}
