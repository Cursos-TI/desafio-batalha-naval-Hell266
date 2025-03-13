#include <stdio.h>

int main(){
    int tabuleiro[10][10];//criação das matrizes
    char letras[10];

    printf("  ");//loop aninhados para organização do tabuleiro
    for(int i = 0; i <= 0; i++){
        letras[i] = 'A';

        for(int j = 0; j < 10; j++){
        printf(" %c", letras[i]);
        letras[i]++;

    } }
    printf("\n");
   
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 10; i++) {
        printf("%2d", i + 1);

        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0; // Atribuindo valores à matriz
            //cordenadas para os navios 
            int navioHorizontal[3] = {tabuleiro[3][4]= 3, tabuleiro[3][5]= 3, tabuleiro[3][6]= 3};
            int navioVertical[3] = {tabuleiro [5][3]= 3, tabuleiro[6][3]= 3, tabuleiro[7][3]= 3};
            int navioDiagonal1[3] = {tabuleiro[1][3]= 3, tabuleiro[2][2]= 3, tabuleiro[3][1]= 3};
            int navioDiagonal2[3] = {tabuleiro [5][7]= 3, tabuleiro[6][8]= 3, tabuleiro[7][9]= 3};
            
            printf("%2d", tabuleiro[i][j]);
        }
        printf("\n");//lembre-se(eu): a cada um ciclo de i, irá pular uma linha de j 
    }

    return 0;
}