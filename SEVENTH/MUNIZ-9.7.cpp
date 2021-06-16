#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {

    long int fatorial = 1;	
    int cont, n = 0;
    cout << "Digite um numero inteiro para saber seu fatorial: " << endl;
    cin >> n;
    for (cont = 1; cont <= n; ++cont) {
      fatorial = fatorial * cont;
    }
    cout << "Fatorial de" << n << "é" << fatorial<< endl;
  return 0;
}