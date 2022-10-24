/*Faça um programa que peça 3 números inteiros ao usuário, armazene em um vetor, depois mostre o valor de cada elemento do vetor, assim como seu índice.*/
#include <stdio.h>

int main() {
    int vet[3];
    int indice;
    
    
    for(indice = 0; indice <= 2; indice++){
        printf ("entre com 3 numeros: \n", indice+1);
        scanf ("%d", &vet[indice]);
    }
    for (indice = 0; indice <= 2; indice++){
        printf ("numero %d = %d\n", indice+1, vet[indice]);
    }
}
