#include <stdio.h>
#include <stdlib.h>

int main() {
    char words[20] = {"aaaaaaaaaaaaaaaaaaaa"};
    int size;
    
    
    printf("escrever algo aq: \n");
    fgets(words[size]);
    
    for(words[size] = 0; words[size]+1 != '\0'; size++){
        if(words[size] == '\n'){
            words[size] == '\0';
        }
    }
    for(words[size] = 0; words[size]+1 != '\0'; size++){
        //printf("%d = %d", size, words[size]);
    }
    printf("o tamanho da string e: %d", size)
    
    return 0;
}
