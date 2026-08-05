#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fun��o principal do programa
int main() {
    int a, b, c;

    printf("Digite o numero inicial: ");
    scanf("%d", &a);

    printf("Digite o numero final: ");
    scanf("%d", &b);

    printf("Informe o intervalo: ");
    scanf("%d", &c);

    if (c == 0) {
        printf("O intervalo nao pode ser zero!\n");
        return 1;
    }

    for (int i = a; i <= b; i += c) {
        printf("%d\n", i);
    }

    return 0;
}