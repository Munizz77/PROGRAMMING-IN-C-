#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;


void gerarVetores(int vetor[], int vetorFrequencia[], int tamanhoVetor, int valorMinimo, int valorMaximo){
 
  int pVetor, num;


  for (pVetor = 0; pVetor < tamanhoVetor; pVetor++) {
    num =  valorMinimo + (rand() % (valorMaximo - valorMinimo));
    vetor[pVetor] = num;
    vetorFrequencia[pVetor] = -1;
  }
}

void imprimirVetor(int vetor[], int tamanhoVetor)
{
  int pVetor;
  for (pVetor = 0; pVetor < tamanhoVetor; pVetor++) {
    cin >> vetor[pVetor];
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
  int pVetor;
  for (pVetor = 0; pVetor < tamanhoVetor; pVetor++) {
    if(vetorFrequencia[pVetor] == 1){
      cin >> vetor[pVetor];
		}
    }
}

int main(){
	
  int tamanhoVetor = 20, vetor[tamanhoVetor], vetorFrequencia[tamanhoVetor];
  int valorMinimo = 50, valorMaximo = 100;

  srand(time(NULL));
  gerarVetores(vetor, vetorFrequencia, tamanhoVetor, valorMinimo, valorMaximo);
    
  cout << "Os valores gerados aleatoriamente no vetor sao" << endl;
  imprimirVetor(vetor, tamanhoVetor);
  armazenarFrequencia(vetor, vetorFrequencia, tamanhoVetor);
  cout << "Valores únicos no vetor" << endl;
  imprimirValoresUnicos(vetor, vetorFrequencia, tamanhoVetor);
  

  return 0;
  