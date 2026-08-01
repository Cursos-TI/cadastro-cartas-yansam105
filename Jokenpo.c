#include <stdio.h>  
#include <stdlib.h>
#include <time.h>


int main () {
int EscolhaJogador, EscolhaMaquina, opcao;

srand(time(NULL));

printf("******JOKENPO*****\n");
printf("Escolha uma opcao:\n");
printf("1. Pedra\n");
printf("2. Papel\n");
printf("3. Tesoura\n");
printf("Digite a sua opcao: ");
scanf("%d", &EscolhaJogador);

EscolhaMaquina = rand() % 3 + 1;     

switch (EscolhaJogador) {

    case 1:
        printf("Voce escolheu: Pedra\n");
        break;
    
    case 2:
        printf("Voce escolheu: Papel\n");
        break;

    case 3:
        printf("Voce escolheu: Tesoura\n");  
        break;

    default:
        printf("Opcao invalida\n");
}


switch (EscolhaMaquina) {

    case 1:
        printf("A maquina escolheu: Pedra\n");
        break;
    
    case 2:
        printf("A maquina escolheu: Papel\n");
        break;

    case 3:
        printf("A maquina escolheu: Tesoura\n");  
        break;
}

if (EscolhaJogador == EscolhaMaquina) {

    printf("****Empate!****\n");
} else if ((EscolhaJogador == 1 && EscolhaMaquina == 3) || 
           (EscolhaJogador == 2 && EscolhaMaquina == 1) || 
           (EscolhaJogador == 3 && EscolhaMaquina == 2)) {
    printf("****Voce venceu!****\n");
} else {
    printf("****A maquina venceu!****\n");
}

}
