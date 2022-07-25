/*Leia um texto pela entrada padrão com no máximo 99 caracteres. Em seguida imprima o número de caracteres digitados. 

– Dica: percorra o vetor até encontrar o caracter teminador ‘\0’ */
#include <stdio.h>
#include <string.h>
int main()
{
    char txt[1000], i;
    
    scanf("%s", &txt[i]);
    
    for(i=0; txt[i] != '\0'; i++);
    printf("%d", i);

    return 0;
}
