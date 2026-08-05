#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int codigos[5] = {101, 102, 103, 104, 105};
    char nomes[5][20] = {"Arroz", "Feijao", "Macarrao", "Macarrao", "Acucar"};
    float precos[5] = {5.5, 7.2, 4.0, 3.8, 2.5};

    int carrinho[10][3];
    int indiceCarrinho = 0;

    printf("=== LISTA DE PRODUTOS ===\n");
    for(int i = 0; i < 5; i++){
        printf("Codigo: %d | Nome: %s | Preco: %.2f\n",
               codigos[i], nomes[i], precos[i]);
    }

    char opcao = 's';

    while(indiceCarrinho < 10) {


 // ajustado o bug do N, feito com DO para aceitar somente S ou N
        do {
            printf("\nDeseja adicionar um item? (s/n): ");
            scanf(" %c", &opcao);

            if(opcao == 's' || opcao == 'S') break;

            else if(opcao == 'n' || opcao == 'N'){break;}

            else(printf("Entrada invalida! Digite apenas 's' para sim ou 'n' para nao.\n"));

        } while(1);

        int codigoDigitado, quantidade;
        int posProduto = -1;

        printf("Digite o codigo do produto: ");
        if(scanf("%d", &codigoDigitado) != 1){
            printf("Entrada invalida!\n");
            scanf("%*s");
            continue;
        }

        for(int i = 0; i < 5; i++){
            if(codigos[i] == codigoDigitado){
                posProduto = i;
                break;
            }
        }

        if(posProduto == -1){
            printf("Codigo invalido!\n");
            continue;
        }

        printf("Digite a quantidade: ");
        while(scanf("%d", &quantidade) != 1 || quantidade <= 0){
            printf("Quantidade invalida! Digite um numero positivo: ");
            scanf("%*s");
        }

        float subtotalFloat = precos[posProduto] * quantidade;
        int subtotalInt = (int)(subtotalFloat * 100);

        carrinho[indiceCarrinho][0] = codigoDigitado;
        carrinho[indiceCarrinho][1] = quantidade;
        carrinho[indiceCarrinho][2] = subtotalInt;

        indiceCarrinho++;

        printf("Item adicionado ao carrinho!\n");
    }

nota_fiscal:

    printf("\n\n=== NOTA FISCAL ===\n");
    float totalGeral = 0;

    for(int i = 0; i < indiceCarrinho; i++){
        int codigo = carrinho[i][0];
        int quantidade = carrinho[i][1];
        float subtotal = carrinho[i][2] / 100.0;

        int pos = -1;
        for(int j = 0; j < 5; j++){
            if(codigos[j] == codigo){
                pos = j;
                break;
            }
        }

        printf("%s | Qtd: %d | Preco: %.2f | Subtotal: %.2f\n",
            nomes[pos], quantidade, precos[pos], subtotal);

        totalGeral += subtotal;
    }

    printf("\nTotal geral: %.2f\n", totalGeral);

    return 0;
}