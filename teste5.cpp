#include <stdio.h>
#include <string.h>

int main(){
	
	char palavra[1000], palavraInvertida[1000];
	int posicao, tamanho;
	
	printf("\nInforme a palavra: ");
	scanf("%s", &palavra);
	
	tamanho = strlen(palavra);
	
	for(posicao = tamanho - 1; posicao >= 0; posicao--){
		printf("%c", palavra[posicao]); 
	}
	
	
	
	
	
	
}
