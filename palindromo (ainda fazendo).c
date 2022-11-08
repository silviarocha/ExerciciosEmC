#include <stdio.h>
#include <stdlib.h>

int main(){
	char words[150], inverse[150];
	int v, value;
	
	value = 0;
	
	printf ("entre com uma frase e descubra se ela eh palindroma ou nao: \n");
	fgets (words, 150, stdin);
	
	//inverte a frase
	for (v = 150; v >= 0; v--){
    printf("%d",inverse[v]);
	}
	
    // comparacao das strings
    while (words[v] != '\0'|| inverse[v] != '\0'){
    	if (words[v]==inverse[v]){
    		words[v]++;
    		inverse[v]++;
		}
		} if((words[v] == '\0' && inverse[v] != '\0') || 
	(words[v] != '\0' && inverse[v] == '\0') || words[v] != inverse[v]){
		value = 1;
	} else if (words[v]==inverse[v]){
		printf("a frase eh palindroma\n");
	} else{
		printf ("a frase nao eh palindroma\n");
	}
}
