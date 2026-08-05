#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fun��o principal do programa
int main() {
    float vetor[3];
    float media;
    float soma = 0;
    int i;
    
    printf("Digite tres valores para ser calculada a media: \n");
    //Lendo 3 valores para o vetor
    for (int i = 0; i < 3; i++) {
        scanf("%f", &vetor[i]);
    }
    for ( i = 0; i < 3; i++) {
        soma += vetor[i];
    }
    if(((i = 0) == 0 && (i = 1) == 0) || ((i = 0) == 0 && (i = 2) == 0) || ((i = 1) && (i = 2) == 0)){
    media = soma;
    printf("A media dos valores eh: %.2f", media);
}else if ((i = 0) == 0 || (i = 1) == 0 || (i = 2) == 0){
    media = soma / 2.0;
    printf("A media dos valores eh: %.2f", media);
}else {
    media = soma / 3.0;
    printf("A media dos valores eh: %.2f", media);
}

    return 0;
}