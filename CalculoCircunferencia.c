/*Dado o tamanho do raio de uma circunferência, calcular a área e o perímetro da mesma*/
#include <stdio.h>
#include <math.h>

int main() {
    float raio, area, diametro, pi;
    
    printf("entre com o tamanho do raio de uma circunferencia: \n");
    scanf("%d", &raio);
    
    pi = 3.14;
    diametro = 2 * pi * raio;
    area = pi * (raio * raio);
    
    printf("O perimetro do quadrado eh: %d\n", diametro);
    printf("A area do quadrado eh: %d\n", area);
}
