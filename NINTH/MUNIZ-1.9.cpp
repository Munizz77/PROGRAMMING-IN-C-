#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main(){
	
	int pAleatoria, nAleatorio, pVetor = 0, vNumero[20], vFinal[10], numero, posiVetor;

	srand(time(NULL));

	numero = 1;
	for (pVetor = 0; pVetor < 20; pVetor++) {
	    vNumero[pVetor] = numero + pVetor;
	}
	
	for(pVetor = 20 - 1; pVetor > 0; pVetor--){
		pAleatoria = rand() % pVetor;	
		nAleatorio = vNumero[pVetor];
		vNumero[pVetor] = vNumero[pAleatoria];
		vNumero[pAleatoria] = nAleatorio;
	}
	
	cout << "os 10 numeros aleatorios dentro dos valores de 20 a 10 sao" << endl;
	for (pVetor = 0; pVetor < 10; pVetor++) {	
		vFinal[pVetor] = vNumero[pVetor];
	    cout << pVetor << "=" << vFinal[pVetor] << endl;
	}
	
	return 0;
	

}