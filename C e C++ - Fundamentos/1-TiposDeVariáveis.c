#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
 
	//Permite usar acentos
	setlocale(LC_ALL,"");
 
    //Imprime Olá
    printf("Olá \n");
    
    //Lendo valor inteiro
    int a = 50;
    printf("O valor de a eh = %d \n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d \n", a);
    
    //Lendo valor quebrado
    float b = 5.5;
    printf("O valor de b eh = %.2f \n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %.2f", b);
    
    //Lendo letra
    char letra = 't';
    printf("O valor de c eh = %c \n", letra);
    fflush(stdin);
    scanf(" %c", &letra);
    printf("O valor de c mudou para %c\n", letra);
    return 0;
}
