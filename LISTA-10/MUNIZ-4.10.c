#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetor(float vetor[], int Tvetor, int maxvalor){
  int Pvetor;
  float num;
  for (Pvetor = 0; Pvetor < Tvetor; Pvetor++) {
    num = ((float)rand()/(float)(RAND_MAX)) * (float)maxvalor;
    vetor[Pvetor] = num;
  }
}
void imprimirVetor(float vetor[], int Tvetor)
{
  int Pvetor;
  for (Pvetor = 0; Pvetor < Tvetor; Pvetor++) {
    printf("[%f]\n ", vetor[Pvetor]);
  }
}
 
int main(){
	
  int Tvetor = 10, maxvalor = 1;
  float vetor[Tvetor];

  srand(time(NULL));
  gerarVetor(vetor, Tvetor, maxvalor);  
  printf("\nOs Valores gerados no vetor são: \n");
  imprimirVetor(vetor, Tvetor);

  return 0;
}
