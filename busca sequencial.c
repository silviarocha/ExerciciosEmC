/*realizar uma busca no vetor ordenado pelo usuario*/
#include <stdio.h>
#include <stdlib.h>

int main() {
 int teste = 0, t, u;
 int vet[11] = {"10", '3', "16", '0', "-1", "104", "23", "-7", "88", "6", "4", "1000"};
 
 do{
     printf ("ENTRE COM UM NUMERO: \n");
     scanf ("%d", &vet[t]);
 } while (teste < t && vet[t] < u);
    t++;
    
}
