#include <stdio.h>
#include <stdlib.h>
typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;
typedef struct {
    int cod;
    char nome[65];
    data_t nasc;
} pessoa_t;
void read_person(pessoa_t * p){
    scanf("%d", &(p->cod));
    scanf(" %64[^\n]", p->nome);
    scanf("%d", &(p->nasc.dia));
    scanf("%d", &(p->nasc.mes));
    scanf("%d", &(p->nasc.ano));
}
void print_person(pessoa_t c){
    printf("%d - ", c.cod);
    printf("%s\n", c.nome);
    printf("Nascimento: %d/%d/%d\n", 
    c.nasc.dia,
    c.nasc.mes,
    c.nasc.ano);
}
int main(){
pessoa_t p;
read_person(&p);
print_person(p);
}