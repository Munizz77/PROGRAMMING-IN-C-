#include <iostream>

using namespace std;

int main(){

    int a;
 
cout << "\nInforme um numero inteiro " << endl;
cin >> a;

if ( a >= 100 && a <= 200){
   cout <<"Você digitou um número entre 100 e 200"<<endl;

  }else {
    cout <<"Voce digitou um numero fora da faixa"<<endl;
  } 

return 0;
}