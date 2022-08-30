#include <stdio.h>
#define MAX_TAM 1000

int main()
{
    int array[MAX_TAM];
    int iCont, resto, num, jCont;
   
    printf("entre com um numero:\n");
    scanf("%d", &num);
   
    for(iCont = 0; num > 9; iCont++){
        resto = num % 10;
        num = num/10;
        array[iCont] = resto;
    }
    array[iCont] = num;
    while(iCont > -1){
    printf("%d ", array[iCont]);
    iCont--;
    }
}
