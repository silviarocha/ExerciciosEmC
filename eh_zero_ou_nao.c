// eh zero ou nao ?
#include <stdio.h>

int main() {
    int numero;
    
    printf("entre com um numero aqui: \n");
    scanf("%d", &numero);
    
        if(numero != 0){
            printf("%d nao eh zero", numero);
        } else{
            printf("eh zero", numero);
        }
}
