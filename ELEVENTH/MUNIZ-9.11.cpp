#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;


void gerarMatriz(int tmatriz, float matriz[tmatriz][tmatriz], int vminimo, int vmaximo){
	int linha, coluna;
	float valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = ((float)rand() / RAND_MAX) * (vmaximo - vminimo) + vminimo;
      matriz[linha][coluna] = valeatorio;
    }
  }

}

void dobrarValoresMatriz(int tmatriz, float matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) { 
			matriz[linha][coluna] = matriz[linha][coluna] * 2;
    }
  }
}

void substrairPorUm(int tmatriz, float matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) { 
      if(matriz[linha][coluna] < 0){
        matriz[linha][coluna] = matriz[linha][coluna] + 1;
			}else{
				matriz[linha][coluna] = matriz[linha][coluna] - 1;
			}

    }
  }
}

void imprimirMatriz(int tmatriz, float matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
      cin >> matriz[linha][coluna];
    }
  }
}
 
int main(){
	
  int tmatriz = 2, vminimo = -1, vmaximo = 1;
  float matriz[tmatriz][tmatriz], media;

  srand(time(NULL));
  gerarMatriz(tmatriz, matriz, vminimo, vmaximo);
    
  cout << "Matriz original com valores decimais gerados entre"<< vminimo << "a" << vmaximo << endl;
	imprimirMatriz(tmatriz, matriz);
	
	dobrarValoresMatriz(tmatriz, matriz);
	cout << "Imprimindo o dobro dos valores da matriz original" <<endl;
	imprimirMatriz(tmatriz, matriz);

	substrairPorUm(tmatriz, matriz);
	cout << "Imprimindo os valores dobrados substraído por 1" << endl;
	imprimirMatriz(tmatriz, matriz);
	
		
  return 0;
}
