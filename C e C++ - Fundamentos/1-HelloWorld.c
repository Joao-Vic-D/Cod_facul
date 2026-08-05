#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Fun��o principal do programa
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil"); //Definindo a lingua 
    //Imprime na tela
    printf("\nOla mundo! ");
    int a, b, opcao, resultado;
    printf(" \nDigite dois valores inteiros: ");
    scanf("%d %d ", &a , &b);
    printf("\n Escolha uma das opcoes abaixo: \n 1-soma \n 2-subatracao");
    scanf("%d", &opcao);
    switch (opcao)
    {
    case 1:
        resultado = a + b;
        printf("\n O resultado eh %d", resultado);
        break;
    case 2:
        resultado = a - b;
        printf("\n O resultado eh %d", resultado);
        /* code */
        break;
    
    default:
        break;
    }
    //Pausa o programa ap�s executar
    return 0;

}

