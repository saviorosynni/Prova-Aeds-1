    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    
    int main() { int portaGanhadora, portaSelecionada, portaSemNada, novaPorta; char opcao;
    
    srand(time(NULL)); 
    portaGanhadora = rand() % 3 + 1;
    
    printf("Bem-vindo ao jogo do Savio!\n");
    printf("Escolha uma porta do savio que vc acha que vai ser a ganhadora (1, 2 ou 3): ");
    scanf("%d", &portaSelecionada);
    

    do {
        portaSemNada = rand() % 3 + 1;
    } while (portaSemNada == portaSelecionada || portaSemNada == portaGanhadora);
    
    printf("Savio abriu a porta %d que está vazia.\n", portaSemNada);
    
    printf("Você deseja trocar para a outra porta? (s/n): ");
    scanf(" %c", &opcao);
    
    if (opcao == 's') {
  
        do {
            novaPorta = rand() % 3 + 1;
        } while (novaPorta == portaSelecionada || novaPorta == portaSemNada);
    
        portaSelecionada = novaPorta;
    }
    
    if (portaSelecionada == portaGanhadora) {
        printf("Você ganhou! Parabéns!\n");
    } else {
        printf("Você perdeu. A porta ganhadora era a %d.\n", portaGanhadora);
    }
    
    
        return 0;
    }