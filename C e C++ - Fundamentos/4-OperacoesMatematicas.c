#include <stdio.h>
#include <stdlib.h>

//Fun��o principal do programa
int main(){

    //Definindo Vari�veis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d",a , b, a + b);

    //Subtra��o
    printf("\n A subtracao de %d e %d = %d",a , b, a - b);

    //Divis�o
    printf("\n A divisao de %d e %d = %d",a , b, a / b);

    //Multiplica��o
    printf("\n A multiplicacao de %d e %d = %d",a , b, a * b);

    //Resto da Divis�o
    printf("\n O resto da divisao entre %d e %d = %d",a , b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));    

    //Raiz Quadrada
    printf("\n A raiz quadrada de 9 = %.2f", sqrt(9));   

    printf("\n");

    //Pausa o programa ap�s executar
    system("pause");
    return 0;

}
