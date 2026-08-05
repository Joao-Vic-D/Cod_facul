#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int codigos[5] = {101, 102, 103, 104, 105};
    char nomes[5][20] = {"Arroz", "Feijao", "Macarrao", "Macarrao", "Acucar"};
    float precos[5] = {5.5, 7.2, 4.0, 3.8, 2.5};

    int carrinho[10][3];
    int indiceCarrinho = 0;

    int totalUnidades = 0; // <<< NOVA VARIÁVEL

    printf("=== LISTA DE PRODUTOS ===\n");
    for(int i = 0; i < 5; i++){
        printf("Codigo: %d | Nome: %s | Preco: %.2f\n",
               codigos[i], nomes[i], precos[i]);
    }

    char opcao = 's';
    int sair = 0;

    while(indiceCarrinho < 10) {

        // ======== VALIDAÇÃO DO S/N CORRIGIDA ========
        while(1) {
            printf("\nDeseja adicionar um item? (s/n): ");
            scanf(" %c", &opcao);

            if(opcao == 's' || opcao == 'S') {
                break; // segue no programa
            }

            if(opcao == 'n' || opcao == 'N') {
                sair = 1; 
                break;
            }

            printf("Entrada invalida! Digite apenas 's' para sim ou 'n' para nao.\n");

            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        }

        if(sair == 1) break;

        // SE JÁ ESTIVER COM 10 UNIDADES TOTAL → ENCERRAR
        if(totalUnidades >= 10) break;

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

        // Impede ultrapassar o limite de 10 unidades
        if(totalUnidades + quantidade > 10) {
            printf("Limite de 10 unidades no total atingido! Só restam %d unidades.\n",
                   10 - totalUnidades);
            continue;
        }

        float subtotalFloat = precos[posProduto] * quantidade;
        int subtotalInt = (int)(subtotalFloat * 100);

        carrinho[indiceCarrinho][0] = codigoDigitado;
        carrinho[indiceCarrinho][1] = quantidade;
        carrinho[indiceCarrinho][2] = subtotalInt;

        indiceCarrinho++;
        totalUnidades += quantidade; // <<< SOMA DO TOTAL DE UNIDADES

        printf("Item adicionado ao carrinho!\n");

        // SE DER 10 UNIDADES EXATAS → ENCERRA
        if(totalUnidades == 10) {
            printf("\nLimite de 10 unidades atingido!\n");
            break;
        }
    }

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
