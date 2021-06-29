#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(int vetor[], int tamanhoVetor, int valorMinimo, int valorMaximo){
    int posicaoVetor;
    for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
        int num =  valorMinimo + (rand() % (valorMaximo - valorMinimo));
        vetor[posicaoVetor] = num;
    }
}

void imprimirVetor(int vetor[], int tamanhoVetor){
  for(int i = 0; i < 20;posicaoVetor++){
    printf("%d ", vetor[posicaoVetor]);
  }
}

void imprimirValoresRepetidos(int vetor[], int tamanhoVetor){
	int posicaoA, posicaoB;


    for (posicaoA = 0; posicaoA < 20; posicaoA++) {
      for(posicaoB = posicaoA+1; posicaoB < 20;posicaoB++){
        if(vetor[posicaoA] == vetor[posicaoB]){
        	printf("%d ", vetor[posicaoB]);
				}
			}
    }
}

  
int main(){
	
    int  vetor[20];
    int min = 1, max = 51;

    srand( (unsigned)time(NULL) );
    gerarVetor(vetor, 20, 1, 51);
    
    printf("\nOs valores gerados aleatoriamente no vetor são: \n");
    imprimirVetor(vetor, 20);
    printf("\nValores repetidos no vetor: \n");
    imprimirValoresRepetidos(vetor, 20);


    return 0;
}