#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void) {
    int Milhar, Centena, Unidade, Dezena, aleatorio;

  srand ((unsigned)time (NULL) );

  aleatorio = 1000 + (rand() % 9999);

  cout <<"Digite um numero entre 1000 e 9999\n%d \n" << aleatorio << endl;
  Milhar = ((aleatorio / 1000) * 1000);
  Centena = (aleatorio  - Milhar) / 100 * 100;
  Unidade = aleatorio % 10;
  Dezena = (((aleatorio  - Milhar) - Unidade)/10) %10 *10;

  cout << "Milhar:" << Milhar << "Centena:" << Centena <<"Dezena:" << Dezena <<"Unidade:"<< Unidade << endl;

  
  return 0;
}
