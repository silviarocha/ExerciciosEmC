/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9*/
#include <stdio.h>
int main() {
    //definicao das variaveis
    int tabuada1, valor1, tabuada2, valor2, tabuada3, valor3, tabuada4, valor4, tabuada5, valor5, tabuada6, valor6, tabuada7, valor7, tabuada8, valor8, tabuada9, valor9;
    
    //inicializacao da variavel "tabuada1" e "tabuada2"
    tabuada1 = 1;
    tabuada2 = 2;
    tabuada3 = 3;
    tabuada4 = 4;
    tabuada5 = 5;
    tabuada6 = 6;
    tabuada7 = 7;
    tabuada8 = 8;
    tabuada9 = 9;
    
    //entrada de dados
    //nao ha
    
     printf("/**********************************************************/\n");
    //processamento de dados(laco) 1
    for(valor1 = 1; valor1 <= 9; valor1++){
        //saida de dados 1
        printf("%d x %d = %d\n", tabuada1, valor1, tabuada1 * valor1);
    }
         printf("/**********************************************************/\n");
         
    //processamento de dados(laco) 2
    for(valor2 = 1; valor2 <= 9; valor2++){
        //saida de dados 2
        printf("%d x %d = %d\n", tabuada2, valor2, tabuada2 * valor2);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 3
    for(valor3 = 1; valor3 <= 9; valor3++){
        //saida de dados 3
        printf("%d x %d = %d\n", tabuada3, valor3, tabuada3 * valor3);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 4
    for(valor4 = 1; valor4 <= 9; valor4++){
        //saida de dados 4
        printf("%d x %d = %d\n", tabuada4, valor4, tabuada4 * valor4);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 5
    for(valor5 = 1; valor5 <= 9; valor5++){
        //saida de dados 5
        printf("%d x %d = %d\n", tabuada5, valor5, tabuada5 * valor5);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 6
    for(valor6 = 1; valor6 <= 9; valor6++){
        //saida de dados 6
        printf("%d x %d = %d\n", tabuada6, valor6, tabuada6 * valor6);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 7
    for(valor7 = 1; valor7 <= 9; valor7++){
        //saida de dados 7
        printf("%d x %d = %d\n", tabuada7, valor7, tabuada7 * valor7);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 8
    for(valor8 = 1; valor8 <= 9; valor8++){
        //saida de dados 8
        printf("%d x %d = %d\n", tabuada8, valor8, tabuada8 * valor8);
    }
     printf("/**********************************************************/\n");
     //processamento de dados(laco) 9
    for(valor9 = 1; valor9 <= 9; valor9++){
        //saida de dados 9
        printf("%d x %d = %d\n", tabuada9, valor9, tabuada9 * valor9);
    }
     printf("/**********************************************************/\n");
}
