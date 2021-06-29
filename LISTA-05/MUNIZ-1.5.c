#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    srand( (unsigned)time(NULL) );
    float a, b;

cout << "\nDigite seu numero entre 0 e 5 para jogar: " << endl;
cin >> a;

if( a < 0 || a > 5){
  cout << "Erro, jogue novamente dentro dos indicadores"<< endl;
}else{
  b = (rand() % 6); 
  if(b > a){
    cout << "Seu numero:"<< a <<"Numero da maquina:"<< b << "Derrotas" << "voce Perdeu!" << endl;
  }
  else if (b == a){
      cout << "Seu numero:"<< a <<"Numero da maquina:"<< b << "Derrotas" << "Empate" << endl;
  }
  else{
      cout << "Seu numero:"<< a <<"Numero da maquina:"<< b << "Derrotas" << "Win!!!" << endl;
      }
}
    return 0;
    

}