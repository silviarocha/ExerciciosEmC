/*escreva um programa que leia dois vetores com 10 elementos cada e gere um ter-
ceiro vetor de 20 elementos, cujos valores deverão ser compostos pelos elementos
intercalados dos dois outros vetores. ao final do programa, deverá mostrar os
dois vetores originais e o terceiro vetor com os valores intercalados.*/

#include <stdio.h>
#define TAM 2 //uma constante

int main()
{
    int v1[TAM], v2[TAM], v3[TAM*2], elem;
    
    //v1
    for(elem=0; elem < TAM; elem++){
        scanf("%i", &v1[elem]);
    }
    
     //v2
    for(elem=0; elem < TAM; elem++){
        scanf("%i", &v2[elem]);
    }
    
    //preenchimento de v1
    for(elem=0; elem < TAM; elem++){
        v3[elem*2] = v1[elem];
    }
    
    //preenchimento de v2
    for(elem=0; elem < TAM; elem++){
        v3[elem*2] = v2[elem];
    }
    
    //preenchimento de v3
    for(elem=0; elem < TAM*2; elem++){
        v3[elem*2] = v1[elem];
    }
    for(elem=0; elem < TAM; elem++){
        v3[elem*2+1] = v2[elem];
    }
    
    //valores finais de v1
    printf("o primeiro vetor eh: ");
    for(elem=0; elem < TAM; elem++){
        printf("%i", v1[elem]);
    }
    printf("\n ");
    
     //valores finais de v2
    printf("o segundo vetor eh: ");
    for(elem=0; elem < TAM; elem++){
        printf("%i", v2[elem]);
    }
    printf("\n ");
    
     //valores finais de v3
    printf("o terceiro vetor eh: ");
    for(elem=0; elem < TAM*2; elem++){
        printf("%i", v3[elem]);
    }
    printf("\n ");
    
    return 0;
}
