#include <iostream>

using namespace std;

int main(){

    int a;
 
cout << "\nInforme um numero inteiro " << endl;
cin >> a;

if ( a >= 100 && a <= 200){
    printf("Você digitou um número entre 100 e 200");

  }else {
    printf("Voce digitou um numero fora da faixa");
  } 

return 0;
}