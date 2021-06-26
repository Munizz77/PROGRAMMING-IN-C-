#include <iostream>
#include<stdio.h>  
#include <time.h>

using namespace std;

void gerarVetor(int vetor[], int tVetor, int vMinimo, int vMaximo){
  int pVetor, num;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    num  =  vMinimo + (rand() % (vMaximo - vMinimo));
    vetor[pVetor] = num;
  }
}
void imprimirVetor(int vetor[], int tVetor)
{
  int pVetor;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    cin >> vetor[pVetor];
  }
}
void substitutirValoresImpares(int vetor[], int tVetor){
	int pVetor;
  for (pVetor = 0; pVetor < tVetor; pVetor++) {
    if(vetor[pVetor] % 2 != 0){
      vetor[pVetor] = 0;
		}
  }
}
int main(){
	
  int tVetor = 15, vetor[tVetor];
  int vMinimo = 1, vMaximo = 41;
  srand(time(NULL));
  gerarVetor(vetor, tVetor, vMinimo, vMaximo);  
  cout << "Os valores gerados no vetor sao" << endl;
  imprimirVetor(vetor, tVetor);   
  substitutirValoresImpares(vetor, tVetor);  
	printf("\n\n");
 cout << "Todos os vetores com valores ímpares substituídos por zero" << endl;
  imprimirVetor(vetor, tVetor);
    
  return 0;
  
}
