#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>


using namespace std;

int main() {

    srand( (unsigned)time(NULL) );

    
	int tVetor = 8, int vInteiro[tVetor], valor, pVetor, Rvalor = 0, patual = 0;
	
	
	for (pVetor = 0; pVetor < tVetor; pVetor++){
		cout << "Qual o valor daposição" << pVetor << endl;
		cin >> vInteiro[pVetor];
		getchar();
	}	


	cin >>"\n";
	cout << "Digite o valor para procurar no vetor" << endl;
	cin >> valor;
	getchar();
	cin >>"\n";


	for (pVetor = 0; pVetor < tVetor; pVetor++){
		if (valor == vInteiro[pVetor]){
			cout << "O valor"<< valor << "está na posicao" << pVetor << endl;
			return 0;
		}
	}
	
	cout<<  "O valor" << valor << "nao esta dentro do vetor" << endl;
	return 0;
}