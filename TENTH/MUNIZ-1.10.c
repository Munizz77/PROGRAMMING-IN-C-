#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarVetores(int vetor[], int vetorFrequencia[], int tamanhoVetor, int valorMinimo, int valorMaximo){
  int posicaoVetor, num;
  for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
    num =  valorMinimo + (rand() % (valorMaximo - valorMinimo));
    vetor[posicaoVetor] = num;
    vetorFrequencia[posicaoVetor] = -1;
  }
}

void imprimirVetor(int vetor[], int tamanhoVetor)
{
  int posicaoVetor;
  for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
    printf("%d ", vetor[posicaoVetor]);
  }
}


void armazenarFrequencia(int vetor[], int vetorFrequencia[], int tamanhoVetor){
	int posicaoA, posicaoB, contador;

  for (posicaoA = 0; posicaoA < tamanhoVetor; posicaoA++) {
    contador = 1;
    for(posicaoB = posicaoA + 1; posicaoB < tamanhoVetor; posicaoB++){
      if(vetor[posicaoA] == vetor[posicaoB]){
        contador++;
        vetorFrequencia[posicaoB] = 0;
        break;
			}
		}
		if(vetorFrequencia[posicaoA] != 0){
			vetorFrequencia[posicaoA] = contador;
		}
  }
}

void imprimirValoresUnicos(int vetor[], int vetorFrequencia[], int tamanhoVetor)
{
  int posicaoVetor;
  for (posicaoVetor = 0; posicaoVetor < tamanhoVetor; posicaoVetor++) {
    if(vetorFrequencia[posicaoVetor] == 1){
      printf("%d ", vetor[posicaoVetor]);
		}
    }
}

int main(){
	
  int tamanhoVetor = 20, vetor[tamanhoVetor], vetorFrequencia[tamanhoVetor];
  int valorMinimo = 50, valorMaximo = 100;

  srand(time(NULL));
  gerarVetores(vetor, vetorFrequencia, tamanhoVetor, valorMinimo, valorMaximo);
    
  printf("Os valores gerados aleatoriamente no vetor são: \n");
  imprimirVetor(vetor, tamanhoVetor);
    
  armazenarFrequencia(vetor, vetorFrequencia, tamanhoVetor);
    
  printf("\n\n");
  printf("Valores únicos no vetor: \n");
  imprimirValoresUnicos(vetor, vetorFrequencia, tamanhoVetor);
  printf("\n\n");

  return 0;
  
}