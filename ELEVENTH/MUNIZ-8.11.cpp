#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


void gerarMatriz(int tmatriz, float matriz[tmatriz][tmatriz], int vmaximo){
	int linha, coluna;
	float valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = ((float)rand()/(float)(RAND_MAX)) * (float)vmaximo;
        matriz[linha][coluna] = valeatorio;
    }
  }
}
float calcularMedia(int tmatriz, float matriz[tmatriz][tmatriz]){
	int linha, coluna;
	float somatoria = 0, media = 0;	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
      somatoria += matriz[linha][coluna];
    }
  }
	media = somatoria / (tmatriz * 2);
  return media;
}

void imprimirMatriz(int tmatriz, float matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        cin >> matriz[linha][coluna];
    }
  }
}


cin >> "\n";
int main(){
	
  int tmatriz = 6, vmaximo = 1;
  float matriz[tmatriz][tmatriz], media;

  srand(time(NULL));
  gerarMatriz(tmatriz, matriz, vmaximo);
    
  cout << "Valores decimais gerados entre 0 e 1" << endl;
	imprimirMatriz(tmatriz, matriz);
	
	cin >> "\n";
	media =  calcularMedia(tmatriz, matriz);
	cout << "A média dos valores da matriz é" << media << endl;
	
  return 0;
}
