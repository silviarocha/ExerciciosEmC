#include <stdio.h>

int main()
{
    int numero;
    int antecessor;
    int sucessor;
    
    printf("digite um numero e descubra qual é o seu sucessor e antecessor:/> ");
    scanf("%d", &numero);
    
    antecessor = numero - 1;
    sucessor = numero + 1;
    
    printf("o antecessor eh: %d\n\n", antecessor);
    printf("o sucessor eh: %d\n\n", sucessor);
}
