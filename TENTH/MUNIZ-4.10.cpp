#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;

void gerarVetor(float vetor[], int tVetor, int vMaximo){
  int pVetor;
  float num;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    num = ((float)rand()/(float)(RAND_MAX)) * (float)vMaximo;
    vetor[pVetor] = num;
  }
}

void imprimirVetor(float vetor[], int tVetor)
{
  int pVetor;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    cin >> vetor[pVetor];
  }
}
int main(){
	
  int tVetor = 10, vMaximo = 1;
  float vetor[tVetor];

  srand(time(NULL));
  gerarVetor(vetor, tVetor, vMaximo);
    
  cout << "Os valores gerados no vetor sao" << endl;
  imprimirVetor(vetor, tVetor);
  
  return 0;
}