#include <stdio.h>
int main(){
    printf("Super Trunfo!\n");
    char Estado1[16];
    char Estado2[16];
    char codigo1[4];
    char codigo2[4];
    char Cidade1[50];
    char Cidade2[50];
    int populacao;
    float area;
    float pib;
    int turisticos;
    float Densidade_Popilacional = (float)(populacao + area) / 2;
    float Pib_per_Capita = (float)(pib + populacao) / 2;

    //Carta 1
    printf("Carta 1 \n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos);

    //Impressão da Carta 1

    printf("Carta 1\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d\n", populacao);
    printf("Àrea: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade populacional: %f\n", Densidade_Popilacional);
    printf("Pib per Capita: %f\n", Pib_per_Capita);

    //Carta 2

    printf("Carta 2\n");
    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da Cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a população da Cidade: \n");
    scanf("%d", &populacao);

    printf("Digite a área da Cidade: \n");
    scanf("%f", &area);

    printf("Digite o Pib da Cidade: \n");
    scanf("%f", &pib);

    printf("Digite o número de pontos turisticos: \n");
    scanf("%d", &turisticos);

    //Impressão da Carta 2

    printf("Carta 2\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d\n", populacao);
    printf("Àrea: %.2f\n", area);
    printf("Pib: %.2f\n", pib);
    printf("Pontos Turisticos: %d\n", turisticos);
    printf("Densidade populacional: %f\n", Densidade_Popilacional);
    printf("Pib per Capita: %f\n", Pib_per_Capita);

    return 0;
}
