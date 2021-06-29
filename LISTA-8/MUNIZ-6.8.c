#include <stdio.h>
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
	
	srand(time(NULL));
	
	int tVetor = 4, vBinario[tVetor], pVetor,
	a1 = 2, a, x, vDecimal = 0;

	cout << "O Valor binario gerado foi :"<<endl;
	for(pVetor = tVetor - 1; pVetor >= 0; pVetor--){
		vBinario[pVetor] = rand() % 2;
		cin >> vBinario[pVetor];
		x = 1;
		a = 1;
		while(a <= pVetor){
			x *= a1;
			++a;
		}
		vDecimal += (vBinario[pVetor] * x);
	}
	
	cin >> "\n";
    cout << "Valor converido em decimal" <<  vDecimal << endl;
	
	
	return 0;
}