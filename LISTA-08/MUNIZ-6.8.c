#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(NULL));
	
	int tamanhoVetor = 4, vetorBinario[tamanhoVetor], posicaoVetor,
	base = 2, expoente, calculoExpo, valorDecimal = 0;

	printf("Valor binário gerado aleatoriamente: ");
	for(posicaoVetor = tamanhoVetor - 1; posicaoVetor >= 0; posicaoVetor--){
		
		vetorBinario[posicaoVetor] = rand() % 2;
		
		printf("%d", vetorBinario[posicaoVetor]);
		
		calculoExpo = 1;
		expoente = 1;
		while(expoente <= posicaoVetor){
			calculoExpo *= base;
			++expoente;
		}
		
		valorDecimal += (vetorBinario[posicaoVetor] * calculoExpo);
	}

	printf("\n");
	
	printf("Valor converido em decimal: %d\n", valorDecimal);
	
	
	return 0;
}