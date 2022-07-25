/* 61. faça um programa em C que crie e inicialize um arrei de 20 posições
inteiros com 0 para cada elemento. imprima o vetor em seguida, indicando a posi-
ção e o valor na posiçao (um por linha)*/
#include <stdio.h>

int main()
{
    int numero=0;
    int posicao[20];
    
    for(numero = 1; numero <= 20; numero++){
    posicao[numero] = 0;
    printf("%d - %d\n", numero, posicao[numero]);
    }

    return 0;
}

