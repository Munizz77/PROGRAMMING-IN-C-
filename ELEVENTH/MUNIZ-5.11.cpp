#include <stdio.h>
#include <stdlib.h>
#include <iostream>


using namespace std;

void gerarMatriz(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna, valeatorio;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
        
      valeatorio = rand() % 101;
      matriz[linha][coluna] = valeatorio;
    }
  }
}

void menoremaiorvalor(int tmatriz, int matriz[tmatriz][tmatriz]){

  int linha, coluna, menorvalor, maiorValor;
	
	menorvalor = matriz[0][0], maiorValor = matriz[0][0];
	
	for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  

			if(menorvalor > matriz[linha][coluna]){				
				menorvalor = matriz[linha][coluna];
				
			}else if (matriz[linha][coluna] > maiorValor){
				
				maiorValor = matriz[linha][coluna];
			}
        }
    } 
    cout << "O menor valor da matriz" << menorvalor);
    cout << "O maior valor da matriz" << maiorValor);
}

void matrizz(int tmatriz, int matriz[tmatriz][tmatriz]){
	int linha, coluna;
	
  for (linha = 0; linha < tmatriz; linha++) {
    for (coluna = 0; coluna < tmatriz; coluna++) {  
      cin >> matriz[linha][coluna];
    }
    }
}
cin >> "\n";
int main() {

  int tmatriz = 10, matriz[tmatriz][tmatriz];

  srand(time(NULL));
	gerarMatriz(tmatriz,matriz);
	
	cout << "Matriz preenchida com valores aleatório entre 0 e 100" << endl;
	matrizz(tmatriz, matriz);
	
	cin >>"\n");
	menoremaiorvalor(tmatriz, matriz);

  