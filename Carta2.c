#include <stdio.h>
int main(){
    char Estado[30];
    char Carta [100];
    char Cidade [50];
    int populacao;
    float area;
    float pib;
    int turisticos;

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &Carta);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos);


    printf("Estado: %s\n", Estado);
    printf("Carta: %s\n", Carta);
    printf("Cidade: %s\n", Cidade);
    printf("População: %d\n", populacao);
    printf("Àrea: %f\n", area);
    printf("Pib: %f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    
    return 0;
}