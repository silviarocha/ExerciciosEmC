/*Codifique um programa para solicitar 5 números, via teclado,
e exibi-los na ordem inversa àquela em que foram fornecidos. */

#include <stdio.h>

int main()
{
    int v[5], num;
    
    for (num = 0; num < 5; num++){
    printf("entre com 5 numeros: \n");
    scanf("%d", &v[num]);
    }
    
    for (num = 4; num >= 0; num--){
    printf("%d", v[num]);
    }
}
