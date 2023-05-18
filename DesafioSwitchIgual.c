#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
    char mat1[5][39] = {"jayson tatum", "marcus smart", "17", "bill russel", "lakers"},
    mat[5][47] = {
        "|  |  |  |  |  |  | *|  |  |  |  |  | *|", 
        "|  |  |  |  |  |  | *|  |  |  |  |  | *|", 
        "|  |  | *| *| *| *| *| *| *| *| *| *| *|", 
        "|  |  |  |  | *|  |  |  |  |  |  | *| *|", 
        "|  |  |  |  |  |  | *| *| *| *| *|  | *|"}, 
        chute[14];

    int escolha, chance = 0, chance2 = 0, contadorJay = 0, contadorMar = 0, contadorTitu = 0, contadorBil = 0, contadorLA = 0, respCert= 0;

    
    do{    
        chance = 0;
        for (int i = 0; i < 5; i++){
            printf("%i- %s\n\n", i + 1, mat[i]);
        }
        printf("1 - Franchise Player do Boston Celtics\n");
        printf("2 - Melhor defensor do Boston Celtics\n");
        printf("3 - Quantidade de titulos do Boston Celtics\n");
        printf("4 - Maior Campeao pelo Boston Celtics\n");
        printf("5 - Maior adversario do Boston Celtics\n");

         printf("Escolha a pergunta para responder: ");
        scanf("%i", &escolha);
        fflush(stdin);
            do{
                switch (escolha){
                case 1:
                    if(contadorJay != 2){
                        printf("Qual sua resposta?:  ");
                        gets(chute);
                        fflush(stdin);
                            if (!strcmp(mat1[0], chute)){
                                printf("Parabens!!!Voce acertou a resposta!\n");
                                mat[0][2] = 'j';
                                mat[0][5] = 'a';
                                mat[0][8] = 'y';
                                mat[0][11] = 's';
                                mat[0][14] = 'o';
                                mat[0][17] = 'n';
                                mat[0][20] = ' ';
                                mat[0][23] = 't';
                                mat[0][26] = 'a';
                                mat[0][29] = 't';
                                mat[0][32] = 'u';
                                mat[0][35] = 'm';
                                respCert++;
                                chance = 1;
                                chance2++;
                                contadorJay = 2;
                            }else{
                                    printf("Voce errou!\n");
                                    chance = 0;
                                    contadorJay++;
                                }
                            if (contadorJay >= 2 && chance != 1){//verifica se a quantidade de tentativas noi foi batida
                                printf("Você não tem mais chances!\n");  
                                chance = 1;
                                chance2++;
                            }
                    }else{
                        printf("\nFaça a próxima pergunta!!\n");
                        chance = 1;
                    }
                    
                    break;
                case 2:
                    if(contadorMar != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[1], chute)){
                            printf("Parabens!!!Voce acertou a resposta!\n");
                                mat[1][2] = 'm';
                                mat[1][5] = 'a';
                                mat[1][8] = 'r';
                                mat[1][11] = 'c';
                                mat[1][14] = 'u';
                                mat[1][17] = 's';
                                mat[1][20] = ' ';
                                mat[1][23] = 's';
                                mat[1][26] = 'm';
                                mat[1][29] = 'a';
                                mat[1][32] = 'r';
                                mat[1][35] = 't';
                            respCert++;
                            chance = 1;
                            chance2++;
                            contadorMar = 2;
                        }else{
                                printf("Voce errou!\n");
                                chance = 0;
                                contadorMar++;
                            }
                        if (contadorMar >= 2 && chance != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Você não tem mais chances!\n");  
                            chance = 1;
                            chance2++;
                        }
                    }else{
                        printf("\nFaça a próxima pergunta!!\n");
                        chance = 1;
                    }
                    break;
                case 3:
                    if(contadorTitu != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[2], chute)){
                            printf("Parabens!!!Voce acertou a resposta!\n");
                             mat[2][2] = '1';
                             mat[2][5] = '7';

                            respCert++;
                            chance = 1;
                            chance2++;
                            contadorTitu = 2;
                        }else{
                                printf("Voce errou!\n");
                                chance = 0;
                                contadorTitu++;
                            }
                        if (contadorTitu >= 2 && chance != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Você não tem mais chances!\n");  
                            chance = 1;
                            chance2++;
                        }
                    }else{
                        printf("\nFaça a próxima pergunta!!\n");
                        chance = 1;
                    }
                    break;
                case 4:
                    if(contadorBil != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[3], chute)){
                            printf("Parabens!!!Voce acertou a resposta!\n");
                                mat[3][2] = 'b';
                                mat[3][5] = 'i';
                                mat[3][8] = 'l';
                                mat[3][11] = 'l';
                                mat[3][14] = ' ';
                                mat[3][17] = 'r';
                                mat[3][20] = 'u';
                                mat[3][23] = 's';
                                mat[3][26] = 's';
                                mat[3][29] = 'e';
                                mat[3][32] = 'l';
                            respCert++;
                            chance = 1;
                            chance2++;
                            contadorBil = 2;
                        }else{
                                printf("Voce errou!\n");
                                chance = 0;
                                contadorBil++;
                            }
                        if (contadorBil >= 2 && chance != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Você não tem mais chances!\n");  
                            chance = 1;
                            chance2++;
                        }
                    }else{
                        printf("\nFaça a próxima pergunta!!\n");
                        chance = 1;
                    }
                    break;
                case 5:
                    if(contadorLA != 2){
                        printf("Qual seu chute: ");
                        gets(chute);
                        fflush(stdin);
                        if (!strcmp(mat1[4], chute)){
                            printf("Parabens!!!Voce acertou a resposta!\n");
                                mat[4][2] = 'l';
                                mat[4][5] = 'a';
                                mat[4][8] = 'k';
                                mat[4][11] = 'e';
                                mat[4][14] = 'r';
                                mat[4][17] = 's';
                            respCert++;
                            chance = 1;
                            chance2++;
                            contadorLA = 2;
                        }else{
                                printf("Voce errou!\n");
                                chance = 0;
                                contadorLA++;
                            }
                        if (contadorLA >= 2 && chance != 1){//verifica se a quantidade de tentativas noi foi batida
                            printf("Você não tem mais chances!\n");  
                            chance = 1;
                            chance2++;
                        }
                    }else{
                        printf("\nFaça a próxima pergunta!!\n");
                        chance = 1;
                    }
                    break;
                default:
                    break;
                }
            }while (chance != 1);
            printf("\n");
            printf("\n");
            printf("\n");
            printf("\n");
    }while(chance2 != 5);
    printf("\nVoce acertou %i de 5 perguntas\n", respCert);
    for (int i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }
    mat[0][2] = 'j';
    mat[0][5] = 'a';
    mat[0][8] = 'y';
    mat[0][11] = 's';
    mat[0][14] = 'o';
    mat[0][17] = 'n';
    mat[0][20] = ' ';
    mat[0][23] = 't';
    mat[0][26] = 'a';
    mat[0][29] = 't';
    mat[0][32] = 'u';
    mat[0][35] = 'm';
    mat[1][2] = 'm';
    mat[1][5] = 'a';
    mat[1][8] = 'r';
    mat[1][11] = 'c';
    mat[1][14] = 'u';
    mat[1][17] = 's';
    mat[1][20] = ' ';
    mat[1][23] = 's';
    mat[1][26] = 'm';
    mat[1][29] = 'a';
    mat[1][32] = 'r';
    mat[1][35] = 't';
    mat[2][2] = '1';
    mat[2][5] = '7';
    mat[3][2] = 'b';
    mat[3][5] = 'i';
    mat[3][8] = 'l';
    mat[3][11] = 'l';
    mat[3][14] = ' ';
    mat[3][17] = 'r';
    mat[3][20] = 'u';
    mat[3][23] = 's';
    mat[3][26] = 's';
    mat[3][29] = 'e';
    mat[3][32] = 'l';
    mat[4][2] = 'l';
    mat[4][5] = 'a';
    mat[4][8] = 'k';
    mat[4][11] = 'e';
    mat[4][14] = 'r';
    mat[4][17] = 's';
    printf("Respostas Corretas\n");
    for (int i = 0; i < 5; i++){
        printf("%i- %s\n", i + 1, mat[i]);
    }

    system("pause");
}
