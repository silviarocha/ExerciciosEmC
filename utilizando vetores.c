/* exemplo de vetor */
#include <stdio.h>
#include <stdlib.h>

int main() {
      int numero[1000];
    int contador = 0;
    int total;
    
    do{
    printf ("entre com um numero (escreva -999 para interromper): \n");
    scanf ("%i", &numero[contador]);
        contador++;
    } while (numero[contador-1] != -999);
    total = contador-1;
    
    printf ("os numeros que voce digitou foram: \n ");
    for (contador = 0; contador < numero[contador]; contador++){
        printf (" %d \n", numero[contador]);
    }
    return 0;
}
