#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[50];
    int quant;
    float preco;
} Produto;


int main()
{
    int i = 0;
    int a;
    int m_10 = 0;
    printf("Digite quantos produtos deseja cadastrar: ");
    scanf("%d", &a);
        if (a <= 0){
            printf("Quantidade invalida!\n");
        return 1;
        }
    Produto p[a];
    for( i = 0; i < a; i++){
        printf("Digite o nome do produto %d: ", i + 1);
        scanf("%49s", p[i].nome);
        printf("Digite a quantidade: ");
        scanf("%d", &p[i].quant);
        printf("Digite o preco: ");
        scanf("%f", &p[i].preco);
    }
    float total_valor = 0;
    float m_caro = p[0].preco;
    int m_estoque = p[0].quant;
    int indc_m_caro = 0;
    int indc_m_quant = 0;
    for ( i = 0; i < a; i++){
        if (p[i].preco > m_caro){
            indc_m_caro = i;
            m_caro = p[indc_m_caro].preco;
        }
        if (p[i].quant > m_estoque){
            indc_m_quant = i;
            m_estoque = p[indc_m_quant].quant;
        }
        if (p[i].quant < 10){
            m_10++;
        }
        total_valor += p[i].quant * p[i].preco;
    }
    printf("Produto mais caro: %s, preco: %.2f\n", p[indc_m_caro].nome, p[indc_m_caro].preco);
    printf("Produto com maior quantidade: %s, quantidade: %d\n", p[indc_m_quant].nome, p[indc_m_quant].quant);
    printf("Valor total do estoque: %.2f\n", total_valor);
    printf("Produtos com menos de 10 unidades: %d\n", m_10);
    return 0;
}