#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;

void gerarVetor(int vetor[], int tamanhoVetor, int valorMinimo, int valorMaximo){
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        int num =  valorMinimo + (rand() % (valorMaximo - valorMinimo));
        	vetor[posicaoVetor] = num;
    }
}

void imprimirVetor(int vetor[], int tamanhoVetor)
{
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        	printf("%d ", vetor[posicaoVetor]);
    }
}

void imprimirValoresRepetidos(int vetor[], int tamanhoVetor){
	int posicaoA, posicaoB;


    for (posicaoA = 0; posicaoA < tamanhoVetor; posicaoA++) {
        	for(posicaoB = posicaoA + 1; posicaoB < tamanhoVetor; posicaoB++){
        		if(vetor[posicaoA] == vetor[posicaoB]){
        			printf("%d ", vetor[posicaoB]);
				}
			}
    }
}

  
int main(){
	
    int tamanhoVetor = 20, vetor[tamanhoVetor];
    int valorMinimo = 1, valorMaximo = 51;

    srand(time(NULL));
    gerarVetor(vetor, tamanhoVetor, valorMinimo, valorMaximo);
    
    printf("Os valores gerados aleatoriamente no vetor são: \n");
    imprimirVetor(vetor, tamanhoVetor);
    
    printf("\n");
    printf("Valores repetidos no vetor: \n");