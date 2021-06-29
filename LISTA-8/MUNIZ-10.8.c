#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(){
	
	int vetorA[tVetor], tVetor = 20,  min = 97, pVetor, max = 123;
    
	srand(time(NULL));
	cout << "Valores gerados com máscara do tipo inteiro" << vetorA[pVetor] << endl;

	for(pVetor = 0; pVetor < tVetor; pVetor++){	
		vetorA[pVetor] =  min + (rand() % (max - min));
		cout << vetorA[pVetor]<< "  char de " << vetorA[pVetor]<< endl;
	}
	return 0;
}