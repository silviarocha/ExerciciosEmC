/* Leia duas strings. Se as strings forem iguais escreva “strings iguais”.
Caso contrário, concatene as duas strings e imprima a string resultante.  */
#include <stdio.h>
#include <string.h>
#define TAM_MAX 10

int main()
{
    char str1[TAM_MAX];
    char str2[TAM_MAX];
    
    puts("entre com uma string: ");
    fgets(str1, TAM_MAX, stdin);
    
    puts("entre com outra string: ");
    fgets(str2, TAM_MAX, stdin);
    
    if(strcmp(str1,str2) == 0){
        printf("\nSao strings iguais !\n");
    } else{
        strcat(str1,str2);
        printf("STRING CONCATENADA : %s \n", str1);
        
    }
}