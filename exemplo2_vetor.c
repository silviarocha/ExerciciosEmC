/*Faça um programa que leia 5 valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores. */
#include <stdio.h>

int main() {
    int numero[5], valor, soma;
    
    soma = 0;
    
    for (valor = 0; valor < 5; valor++){
        printf ("entre com 5 valores e descubra a sua soma : \n", numero[valor], valor+1);
        scanf ("%d", &numero[valor]);
        soma = numero[0] + numero[1] + numero[2] + numero[3] + numero[4];
    }
        printf ("SOMA = %d\n", soma);
}
