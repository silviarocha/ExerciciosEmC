//Escreva um algoritmo que calcule e imprima a tabuada (1 a 10).

#include <stdio.h>

int main()
{
    int valor1, mult
    
    valor1 = 1;
    
    while(valor1 <= 10){
        mult = valor1 * 8;
        printf("%d x %d", valor1);
        valor1++;
    }
}
