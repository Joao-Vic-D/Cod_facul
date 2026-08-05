#include<math.h>
#include <stdio.h>

typedef struct{
    double x;
    double y;
}Coordenada;

double calcDeslocamento(Coordenada * seq, int tam){
    double total = 0;
    for (int i = 0; i<tam - 1; i++){
        double dx = seq[i + 1].x - seq [i].x;
        double dy = seq[i + 1].y - seq[i].y;
        
        double dist = sqrt(pow(dx, 2) + pow(dy, 2));
        total += dist;
    }
    return total;
}
int main(){
    int tam;
double ds = 0;
scanf("%d", &tam);
Coordenada seq[tam];
for(int i=0;i<tam;i++){
    scanf("%lf%lf", &(seq[i].x), &(seq[i].y));
}
ds = calcDeslocamento(seq, tam);
printf("Deslocamento = %.2lf m\n", ds); 

    return 0;
}