#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavras[5][20] = {"jayson tatum", "marcus smart", "17", "bill russel", "lakers"};
    char chute[13];
    int i, linha = 0, contador = 0, respostaCerta = 0;

    printf("\n\nVOCE TEM DUAS TENTATIVAS POR PALAVRA!\n\n");
        for(i = 0; i < 5; i++){
            
            if (i == 0){
                printf("1 - Franchise Player do Boston Celtics\n|  |  |  |  |  |  |  |  |  |  |  |  |\n");
            }else if (i == 1){
                printf("2 - Melhor defensor do Boston Celtics\n|  |  |  |  |  |  |  |  |  |  |  |  |\n");
            }else if (i == 2){
                printf("3 - Quantidade de titulos do Boston Celtics\n|  |  | \n\n");
            }else if (i == 3){
                printf("4 - Maior Campeão pelo Boston Celtics\n|  |  |  |  |  |  |  |  |  |  |\n\n");
            }else if (i == 4){
                printf("5 - Time Rival do Boston Celtics\n|  |  |  |  |  |  |\n");
            }

            do{
                printf("Digite a %i resposta: ", i + 1);
                fflush(stdin);
                gets(chute);
                fflush(stdin); 

                if (!strcmp(palavras[i], chute)){
                    printf("\nVoce acertou\n");
                    if (i == 0){
                        printf("1 -Franchise Player do Boston Celtics\n| j | a | y | s | o | n |  | t | a | t | u | m |\n\n");
                    }else if (i == 1){
                        printf("2 - Melhor defensor do Boston Celtics\n| m | a | r | c | u | s |  | s | m | a | r | t |\n\n");
                    }else if (i == 2){
                        printf("3 - Quantidade de titulos do Boston Celtics\n| 1 | 7 | \n\n");
                    }else if (i == 3){
                        printf("4 - Maior Campeão pelo Boston Celtics\n| b | i | l |  | r | u | s | s | e | l |\n\n");
                    }else if (i == 4){
                        printf("5 - Time Rival do Boston Celtics\n| l | a | k | e | r | s |\n");
                    }
                    respostaCerta++;
                    
                    linha = 1;
                    contador = 0;
                }else{
                    printf("Voce errou!\n");
                    linha = 0;
                    contador++;
                    
                }
                if (contador >= 2){
                    printf("Suas chances acabaram para essa pergunta\n");
                    linha = 1;
                    contador = 0;
                }
            }while(linha != 1);
            printf("\n---------------------------------------------------------------------\n\n");
            
        }

             printf("Voce acertou %i de %i perguntas!\n", respostaCerta, i);
        
        
}
