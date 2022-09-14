/* escreva um programa em c que leia um numero menor que 9999 e mostre a soma dos digitos centrais (2 e 3 digitos), assim se o numero informado for 4326, a saida devera ser 5 (3+2) */
#include <stdio.h>

int main() {
    int numero, soma, digito1, digito2;
    
    printf("entre com um numero menor que 9999 e descubra a sua saida: \n ");
    scanf("%d", &numero);
    
    digito1 = ((numero%1000)/100);
    digito2 = ((numero%1000)%100)/10;
    
    soma = digito1 + digito2;
    
    printf("a saida eh: %d", soma);
}
