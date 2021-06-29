#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;
int main(){
	
	int Vetor1[10], Vetor2 [10], vSoma[10], pVetor, elementopar = 0;
	 
	cout << "Os valores do 1º Vetor" << endl;
  	cout << "Os números pares entre 2 e 20 sao"<< endl;


	for(pVetor = 0; pVetor < 10; pVetor++){
		Vetor1[pVetor] = elementopar + 2;
		elementopar +=2;
		cout << "Posicao" <<  pVetor <<Vetor1[pVetor] << endl;
	}
	cin >>"\n";
	cout << "Os valores do 2º Vetor" << endl;
  	cout << "Os numeros entre 10 a 19 são: \n" << endl;


	for(pVetor = 0; pVetor < 10; pVetor++){
		Vetor2[pVetor] = pVetor + 10;		
		cout << "Posicao" << pVetor << Vetor2[pVetor] << endl;
	}
	
	cin >> "\n";
	cout <<"Os Valores do Vetor Soma"<< endl;
 	cout <<"A soma dos valores dos vetores é"<< endl;

	for(pVetor = 0; pVetor < 10; pVetor++){
		vSoma[pVetor] = Vetor1[pVetor] + Vetor2[pVetor];		
		cout << "posicao[%d]", pVetor, vSoma[pVetor]<< endl;
	cin >> "\n;	
		
	return 0;
}