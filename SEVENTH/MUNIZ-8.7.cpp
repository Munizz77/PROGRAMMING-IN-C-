#include <stdio.h>
using namespace std;
#include <iostream>

int main(void) {
   int ndigitado, tt, l, c, n = 0;

  cout << "Digite um número aleatorio: " << endl;
  cin >> ndigitado;
  getchar();
	
	tt = (ndigitado * 2 ) - 1;

	for(l = 0 ; l < tt; l++){
			if(l < ndigitado){
				++n;
			}else{
				--n;
			}			
		for(c = 0; c <= l; c++){
			if(c < n){
				cin >> n ;
			}
		}
	}
  return 0;
}