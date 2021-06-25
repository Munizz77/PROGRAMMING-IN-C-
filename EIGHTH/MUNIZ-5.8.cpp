#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	int tVetor = 4, vBinario[tVetor], pVetor;

    srand(time(NULL));
	
    cout << "O valores que irao ocupar os espaços sem ordem no vetor sao"endl;

	for(pVetor = 0; pVetor < tVetor; pVetor++){
		
		vBinario[pVetor] = rand() % 2;

    cout << "posicao" <<  pVetor << vBinario[pVetor] endl;
		
	}
	
  
	
		
	return 0;
}