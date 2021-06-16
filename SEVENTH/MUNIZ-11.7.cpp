#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {

  int termo = 0, a= 0, cont;
  float fatorial = 0, euler = 1.0;

  cout << "Digite um numero inteiro para calcular seu fatorial:"<< endl;
  cin >> a;

	for (int cont = 1; cont <= a; cont++) {
    	fatorial = 1;
    	for(termo = 1; termo <= cont; termo++){
    		fatorial *= termo;    		
		}
		euler = (1.0 / fatorial) + euler ;		
	}	
    
	printf("%.15f\n", euler);


  return 0;
}