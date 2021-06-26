#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

void gerarVetor(int vetor[], int tVetor){
    int pVetor;
    for (pVetor = 0; pVetor < tVetor; pVetor++) {
        int num = rand() % 1000;
        	vetor[pVetor] = num;
    }
}

void imprimirMenorValor(int vetor[], int tVetor){
	int menorValor = vetor[0], maiorValor = vetor[0];
	int pVetor;
	
	for(pVetor = 1; pVetor < tVetor; pVetor++){
		if(menorValor > vetor[pVetor]){
			menorValor = vetor[pVetor];
		}else if (vetor[pVetor] > maiorValor){
			maiorValor = vetor[pVetor];
		}
	}

	cout << "O maior valor do vetor é" << maiorValor << endl;
	cout << "O menor valor do vetor é" << menorValor << endl;
}
void imprimirVetor(int vetor[], int tVetor)
{
    int pVetor;
    for (pVetor = 0; pVetor < tVetor; pVetor++) {
        	cin >> vetor[pVetor]<< endl;
    }
}

