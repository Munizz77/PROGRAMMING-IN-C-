#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;


void gerarVetor(float vetor[], int tVetor, int vMinimo, int vMaximo){
  int pVetor;
  float num;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    num = ((float)rand() / RAND_MAX) * (vMaximo - vMinimo) + vMinimo;
    vetor[pVetor] = num;
  }
}

void imprimirVetor(float vetor[], int tVetor)
{
  float maior = vetor[0]; 
  float menor = vetor[0];
  float media = 0;
  int pVetor;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    cin >> vetor[pVetor];
  }
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
        if (vetor[pVetor] > maior) {
          maior = vetor[pVetor];    
          }
        if (vetor[pVetor] < menor) {
          menor = vetor[pVetor];
          }
       
    }
    for (pVetor = 0; pVetor < tVetor; pVetor++) {
      media = media + vetor[pVetor];
    }
    float totalmedia = media / 20;

    cout <<"Maior:" << maior << endl;
    cout <<"Menor:" << menor << endl;
    cout << " A media dos valores e"<< totalmedia << endl;
}


 
int main(){

  int tVetor = 10, vMinimo = -1, vMaximo = 1;
  float vetor[tVetor];
  srand(time(NULL));
  gerarVetor(vetor, tVetor, vMinimo, vMaximo);
    
  cout << "Os valores gerados no vetor sao" << endl;
  imprimirVetor(vetor, tVetor);

  return 0;
}
