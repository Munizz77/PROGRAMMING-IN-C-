#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(){
	
	int tamanhoVetor = 20, vetorA[tamanhoVetor], posicaoVetor, min = 97, max = 123;
	
	srand(time(NULL));

	printf("Valores gerados aleatoriamente e apresentados com máscara do tipo inteiro %%d: \n\n");
	for(posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++){
		
		vetorA[posicaoVetor] =  min + (rand() % (max - min));
		
		cout << vetorA[posicaoVetor]<< "  char de " << vetorA[posicaoVetor]<< endl;
	
	}
	printf("\n");
	
	return 0;
}