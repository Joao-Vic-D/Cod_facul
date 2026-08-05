#include <stdio.h>

typedef struct{
    int x;
    int y;
    float altura;
    float largura;
} Component;

int onComponent(int mx, int my, Component *c){

    if(mx >= c->x &&
       mx <= c->x + c->largura &&
       my >= c->y &&
       my <= c->y + c->altura){

        return 1;
    }

    return 0;
}

int main(){

    int mx, my;
    int on = 0;

    Component c;

    scanf("%d%d", &mx, &my);
    scanf("%d%d", &(c.x), &(c.y));
    scanf("%f%f", &(c.altura), &(c.largura));

    on = onComponent(mx, my, &c);

    if(on){
        printf("Sobre Componente!\n");
    }else{
        printf("Fora do Componente!\n");
    }

    return 0;
}