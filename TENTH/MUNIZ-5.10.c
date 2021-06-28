#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(float vetor[], int tvetor, int minvalor, int maxvalor){
  int posivetor;
  float num;
  for (posivetor = 0; posivetor < tvetor; posivetor++) {
    num = ((float)rand() / RAND_MAX) * (maxvalor - minvalor) + minvalor;
    vetor[posivetor] = num;
  }
}

void imprimirVetor(float vetor[], int tvetor)
{
  float maior = vetor[0]; 
  float menor = vetor[0];
  float media = 0;
  int posivetor;
  for (posivetor = 0; posivetor < tvetor; posivetor++) {
    printf("%f\n", vetor[posivetor]);
  }
  for (posivetor = 0; posivetor < tvetor; posivetor++) {
        if (vetor[posivetor] > maior) {
          maior = vetor[posivetor];    
          }
        if (vetor[posivetor] < menor) {
          menor = vetor[posivetor];
          }
       
    }
    for (posivetor = 0; posivetor < tvetor; posivetor++) {
      media = media + vetor[posivetor];
    }
    float totalmedia = media / 20;

    printf("\n\n Maior: %f\n", maior);
    printf("n Menor: %f", menor);
    printf(" A media dos valores é: %f",totalmedia);
}

int main(){
	
  int tvetor = 10, minvalor = -1, maxvalor = 1;
  float vetor[tvetor];

  srand(time(NULL));
  gerarVetor(vetor, tvetor, minvalor, maxvalor);
    
  printf("Os valores gerados no vetor são:");
  imprimirVetor(vetor, tvetor);

  return 0;
}
