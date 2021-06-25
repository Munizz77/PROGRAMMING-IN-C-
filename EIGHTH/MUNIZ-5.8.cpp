#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	int tamanhoVetor = 4, vetorBinario[tamanhoVetor], posicaoVetor;

  srand(time(NULL));
	
  printf("O valores preenchidos aleatoriamente no vetor são: \n\n");

	for(posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		
		vetorBinario[posicaoVetor] = rand() % 2;

    printf("posicao[%d] = %d\n", posicaoVetor, vetorBinario[posicaoVetor]);
		
	}
	
  
	
		
	return 0;
}