/*Faca um programa que leia o nome de 5 pessoas e mostre os nomes armazenados.
Utilize vetores.*/
#include <stdio.h>

int main() {
    char n[5][10];
    int i;
    
    for (i = 0; i < 5; i++){
    printf("digite um nome aqui: \n");
    gets(n[i]); }
 
 for(i = 0; i < 5; i++){
     printf("o nome armazenado na posicao %d eh %s\n", i, n[i]);
 }
}
