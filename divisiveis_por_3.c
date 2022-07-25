/* escreva um programa que imprime todos os numeros entre 30 e 5 (nesta ordem) 
divisiveis por 3 e no final imprime sua soma. */
#include <stdio.h>

int main()
{
    int num, soma;
    soma= 15;
    
    for(num=30; num >= 5; num -= 1){
        if((num % 3) == 0){
            printf(" \t%2d\n", num);
        soma +=1;
    }
}
    printf("\t soma = %d\n", soma);
    return 0;
}
