/* Escreva um programa que receba do usuário um vetor com 20 valores inteiros e 
apresente o maior, o menor e suas respectivas posições em que os mesmos foram 
informados. Caso existam números iguais mostre a posição da primeira ocorrência.*/

#include <stdio.h>
#define TAM 5

int main()
{
    int v1[TAM], x, M, pM, MN, pMN;
    
    //preenchimento do vetor (v1)
    for(x=0; x < TAM; x++){
        scanf("%d", &v1[x]);
    }
    
    //maior valor
    M = v1[0];
    pM = 0;
    
    for(x=1; x < TAM; x++){
        if(v1[x] > M){
            M = v1[x];
            pM = x;
        }
    }
    
    //menor valor
    MN = v1[0];
    pMN = 0;
    
    for(x=1; x < TAM; x++){
        if(v1[x] < MN){
            M = v1[x];
            pM = x;
        }
    }

    //vetor resultante
    printf("vetor: ");
        for(x=0; x < TAM; x++){
            printf("%i", v1[x]);
    }
    
    printf("o maior valor é: %i\n, posicao: %i\n", M, pM+1);
    printf("o menor valor é: %i\n, posicao: %i\n", MN, pMN-1);
    
    return 0;
}

