/*Dado o tamanho do lado de um quadrado, calcular a área e o perímetro do mesmo*/
#include <stdio.h>

int main() {
    int lado, area, perimetro;
    
    printf("entre com o tamanho dos lados de um quadrado: \n");
    scanf("%d", &lado);
    
    perimetro = lado * 4;
    area = lado * lado;
    
    printf("O perimetro do quadrado eh: %d\n", perimetro);
    printf("A area do quadrado eh: %d\n", area);
}
