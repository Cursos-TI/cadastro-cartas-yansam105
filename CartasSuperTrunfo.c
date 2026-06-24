#include <stdio.h>

int main (){
    char Estado;
    char Carta;
    char Cidade; 
    int População;
    float Area;
    float Pib;
    int PontosTuristicos;

    printf ("Escolha um estado:\n");
    scanf ("%s", &Estado);

    printf ("Digite o codigo de Carta:\n");
    scanf ("%c", Carta);

    printf ("Digite o nome da Cidade:\n");
    scanf ("%s", &Cidade);

    printf ("Digite a quantidade de população:\n");
    scanf ("%d", População);

    printf ("Digite o tamanho da Area em km2:\n");
    scanf ("%f", Area);

    printf ("Digite o numero do PIB:\n");
    scanf ("%f", Pib);

    printf ("Digite o numero de pontos turisticos:\n");
    scanf ("%d", PontosTuristicos);

    printf ("Estado: %s\n", Estado);
    printf ("Carta: %d\n", Carta);
    printf ("Cidade: %s\n", Cidade);
    printf ("População: %d\n", População);
    printf ("Area em km2: %f\n", Area);
    printf ("PIB: %f\n", Pib);
    printf ("PontosTuristicos:%d", PontosTuristicos);



    }










