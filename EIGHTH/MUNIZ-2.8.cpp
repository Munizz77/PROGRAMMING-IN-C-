#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

	int nstart = 2, nfinish = 20, tVetor = ((nfinish - nstart)/2)+1, vNPares[tVetor], pVetor, vElemento = 0;
	
	for(pVetor = 0; pVetor < tVetor; pVetor++){
		vNPares[pVetor] = vElemento + 2;
		vElemento +=2;
	}
	
    cout << "Os numeros parede de 2 a 20 sao" << endl;
	for(pVetor = 0; pVetor < tVetor; pVetor++){
		cin >> vNPares[pVetor];
	}
		
	return 0;
}