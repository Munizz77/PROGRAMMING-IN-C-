#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int vetorNumero[20], finalv[10], numero, vatorp, 
	aleposi, numeroAleatorio;
	
	srand(time(NULL));

	numero = 1;
	for (vatorp = 0; vatorp < 20; vatorp++) {
	    vetorNumero[vatorp] = numero + vatorp;
	}
	for(vatorp = 20 - 1; vatorp > 0; vatorp--){
		aleposi = rand() % vatorp;
		
		numeroAleatorio = vetorNumero[vatorp];
		vetorNumero[vatorp] = vetorNumero[aleposi];
		vetorNumero[aleposi] = numeroAleatorio;
	}
	printf("\n10 números com valores entre 1 e 20:");
	for (vatorp = 0; vatorp < 10; vatorp++) {
		
		finalv[vatorp] = vetorNumero[vatorp];
	    printf("[%d] = %d\n", vatorp, finalv[vatorp]);
	}
	return 0;	
}

