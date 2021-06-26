#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;

void gerarVetores(int vetor[], int vFrequencia[], int tVetor, int valorMinimo, int valorMaximo){
  int pVetor, num;

  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    num =  valorMinimo + (rand() % (valorMaximo - valorMinimo));
    vetor[pVetor] = num;
    vFrequencia[pVetor] = -1;
  }
}

void imprimirVetor(int vetor[], int tVetor)
{
    int pVetor;
    for (pVetor = 0; pVetor < tVetor; pVetor++) {
      cin >> vetor[pVetor];
    }
}

void contarFrequencia(int vetor[], int vFrequencia[], int tVetor){
	int posicaoA, posicaoB, contador;

  for (posicaoA = 0; posicaoA < tVetor; posicaoA++) {
    contador = 1;
    for(posicaoB = posicaoA + 1; posicaoB < tVetor; posicaoB++){
      if(vetor[posicaoA] == vetor[posicaoB]){
      	contador++;
        vFrequencia[posicaoB] = 0;
		  }
		}
		if(vFrequencia[posicaoA] != 0){
			vFrequencia[posicaoA] = contador;
      
		}
  }
}

void imprimirFrequencia(int vetor[], int vFrequencia[], int tVetor)
{
    int pVetor;
    for (pVetor = 0; pVetor < tVetor; pVetor++) {
      if(vFrequencia[pVetor] != 0){
      cout << "Valor" << vetor[pVetor] << "de" << vFrequencia[pVetor]);
		}
    }
}

  
int main(){
	
    int tVetor = 20, vetor[tVetor], vFrequencia[tVetor];
    int valorMinimo = 50, valorMaximo = 101;

    srand(time(NULL));
    gerarVetores(vetor, vFrequencia, tVetor, valorMinimo, valorMaximo);
    
   cout << "Os valores gerados  no vetor sao" << endl;
    imprimirVetor(vetor, tVetor);
    contarFrequencia(vetor, vFrequencia, tVetor);
    cout << "Frequencia dos é valores" << endl;
    imprimirFrequencia(vetor, vFrequencia, tVetor);


    return 0;
}