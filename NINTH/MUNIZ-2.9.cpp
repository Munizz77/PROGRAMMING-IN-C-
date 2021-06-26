#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

void criarVetor(int vetor[], int tamanhoVetor){
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        int num = rand() % 11;
        	vetor[posicaoVetor] = num;
    }
}

void imprimirVetor(int vetor[], int tamanhoVetor)
{
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        	cout << posicaoVetor << ":" << vetor[posicaoVetor] << endl;
    }
}

void imprimirItensEmComum(int vetorA[], int tamanhoA, int vetorB[], int tamanhoB){
	int posicaoVetorA, posicaoVetorB;


    for (posicaoVetorA = 0; posicaoVetorA < tamanhoA; posicaoVetorA++) {
        	for(posicaoVetorB = 0; posicaoVetorB < tamanhoB; posicaoVetorB++){
        		if(vetorA[posicaoVetorA] == vetorB[posicaoVetorB]){
				}
			}
    }
}
  
int main(){
    int tamanhoA = 5, vetorA[tamanhoA];
    int tamanhoB = 8, vetorB[tamanhoB];

    srand(time(NULL));
  
  	cout << "Valores Vetor A:" << endl;
    criarVetor(vetorA, tamanhoA);
    imprimirVetor(vetorA, tamanhoA);
    
    cin >>"\n"; 
    
    cout << "Valores Vetor B: \n" << endl;
    criarVetor(vetorB, tamanhoB);
    imprimirVetor(vetorB, tamanhoB);
    
    cout << "Valores em comum no Vetor A e Vetor B" << endl;
    imprimirItensEmComum(vetorA, tamanhoA, vetorB, tamanhoB);
    
    
  
    return 0;
}