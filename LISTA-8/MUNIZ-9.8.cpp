#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(){
	
	int numero = 0, vFinal = 20, pVetor, , tVetor = 11, valor1 = 10, nvet[tVetor];
    
    numero = valor1;
	for(pVetor = 0 ; pVetor < tVetor; pVetor++){
		nvet[pVetor] = numero;
		numero++;
	}
	
    cout << "valores entre 20 e 10 sao" << endl;
	for(pVetor = tVetor - 1 ; pVetor >= 0; pVetor--){
		if(nvet[pVetor] % 2 == 0){
			cin >> nvet[pVetor]);
		}
	}
	
    cin >> "Elementos\n";
	cout << "ímpares" << endl;
	for(pVetor = tVetor - 1 ; pVetor >= 0; pVetor--){
		if(nvet[pVetor] % 2 != 0){
			cin >> nvet[pVetor];
		}
	}
		
	return 0;
}