# Prova-Aeds-1
avaliação 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
      int portaEscolhida, portaPremiada, portaVazia;
      char opcao;
      
      int main(void) {
          printf("Bem-vindo ao jogo do MontyHall");
          printf("Escolha uma porta (1,2 ou 3):");
          scanf("%d", &portaEscolhida);
          
srand(time(NULL)); 

int portaPremiada = rand() % 3 + 1;


if (portaEscolhida = portaVazia){
    printf ("Porta Vazia!!\n");
} else {
    printf("Porta Premiada=\n");
}






printf ("%d", portaPremiada);

          
      
    
}
