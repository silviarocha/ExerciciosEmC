#include <stdio.h>
#include <conio.h>
#define LINHA 13
#define COLUNA 3
#define ESPACO 32 
#define MARCADO '*'

int main()
{
    char cartaoLoteria[LINHA][COLUNA];
    int iCont, jCont;
    int Coluna;
    
    printf("\nInforme a linha a ser apostada no jogo: ");
    for(iCont = 0; iCont < LINHA; iCont++)
        for (iCont = 0; iCont < COLUNA; iCont++)
        printf("%d %d\n", iCont, jCont);
            cartaoLoteria[iCont][jCont] = ESPACO;
            
        for(iCont = 0; iCont < LINHA; iCont++)
        printf("Informe a coluna a ser apostada no jogo: %d\n", iCont);
        scanf("%d", &Coluna);
        cartaoLoteria[iCont][Coluna] = MARCADO;
    
    printf("Jogo \tCOLUNA 1\tX\t COLUNA 2\n ");
        for(iCont = 0; iCont < LINHA; iCont++)
        printf("Jogo %d.", iCont);
        for(jCont = 0; jCont < COLUNA; jCont++)
        printf("%c\t", cartaoLoteria[iCont][jCont]);
        printf("\n");
}

