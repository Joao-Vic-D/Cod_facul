typedef struct {
    int codProdutor;
    char grao;
    float quantidade; 
}produtor ;
void le_graos(produtor * p ){
    scanf("%d", &(p->codProdutor));
    scanf(" %c", &(p->grao));
    scanf("%f", &(p->quantidade));
}
void  imprime_totais (produtor *entrada, int n){
    float feijao = 0;
    float trigo = 0;
    float milho = 0;
    float soja = 0;
    for(int i = 0; i<n; i++){
        switch(entrada[i].grao){
            case 'F':
            feijao += entrada[i].quantidade;
            break;
            case 'T':
            trigo += entrada[i].quantidade;
            break;
            case 'S':
            soja += entrada[i].quantidade;
            break;
            case 'M':
            milho += entrada[i].quantidade;
            break;
        }
    }
    printf("Total de toneladas dos Produtos:\n");
    printf("Feijao: %.2f\n", feijao);
    printf("Milho: %.2f\n", milho);
    printf("Soja: %.2f\n", soja);
    printf("Trigo: %.2f\n", trigo);
}
int main(){
    
    int n;
    scanf("%d", &n);
    //Declaração da variável tipo struct
    produtor entrada[n];
    
    for(int i=0;i<n;i++){
        le_graos(&entrada[i]);
    }
    imprime_totais(entrada, n);
    
    return 0;
}