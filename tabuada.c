//Escreva um algoritmo que calcule e imprima a tabuada (1 a 10).

#include <stdio.h>

int main() {
    
    //determinaçao das variaveis & entrada de dados
    int tab, x, valor;
    tab = 0;
    
    printf("entre com um numero que deseja saber a tabuada:\t\t\t\n\n");
    scanf("%d", &tab);
    
    //processamento de dados
    for(valor = 1; valor <= 10; valor++)
        printf("%d x %d = %d\n", tab, valor, tab * valor);
}
