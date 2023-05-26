
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <ctype.h>

int
main ()
{
    int jogador;
    int computador;
    int placarJogador = 0;
    int placarComputador = 0;
    
    printf("Bem vindo a partida de pedra, papel e tesoura.");
    printf("\nDispute com o computador, DIVIRTA-SE!!!!");
    
    
    
    
    while (placarJogador < 3 && placarComputador < 3) {
   
        printf("\nDigite: \n0 = PEDRA.\n1 = PAPEL.\n2 = TESOURA.\n");
        scanf("%d", &jogador);
        switch(jogador){
            case 0 : printf("\nPEDRA\n"); break;
            case 1 : printf("\nPAPEL\n"); break;
            case 2 : printf("\nTESOURA\n"); break;
            default : printf("\nCOMANDO INVALIDO\n"); continue;
        }
        
        srand( (unsigned)time(NULL));
        computador = rand () % 3;
        
        switch(computador){
            case 0 : printf("\nPEDRA\n"); break;
            case 1 : printf("\nPAPEL\n"); break;
            case 2 : printf("\nTESOURA\n"); break;
        }
        
      
        if(jogador == computador){
            printf("EMPATE NESSE RODADA.");
        } else if((jogador == 0 && computador == 2) ||
                  (jogador == 1 && computador == 0) ||
                 (jogador == 2 && computador == 1)) {
            printf("VOCÊ GANHOU ESSA RODADA.");
            placarJogador ++;
        } else {
            printf("VOCÊ PERDEU ESSA RODADA");
            placarComputador++;
        }
        printf("\nPlacar:\nJogador: %d\nComputador: %d\n", placarJogador, placarComputador);
        
    
    }
    
        printf("Iniciar nova operação(s/n): ");
        char resposta;
        scanf(" %c", &resposta);
    
        if (tolower(resposta) == 's') {
            system("clear"); 
            main();
        } else {
            printf("Encerrando operação.\n");
            
        }
   
}
    
    


