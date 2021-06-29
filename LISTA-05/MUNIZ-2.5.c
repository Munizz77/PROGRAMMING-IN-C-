#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    srand( (unsigned)time(NULL) );
    float opplay, apmak;

cout << "\nDigite sua opção para jogar\n 0 = Pedra\n 1 = Papel\n 2 = Tesoura" << endl;
cin >> opplay;

if( opplay < 0 || opplay > 2){
  cout << "Erro, jogue novamente dentro dos indicadores"<< endl;
}else{
  float apmak = (rand() % 3); 
  if ( opplay == 0 && apmak == 1){
    cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Derrota!" << endl;
  }
  else if (opplay == 0 && apmak == 2){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Win!!!!" << endl;
  }
  else if (opplay == apmak){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Empate" << endl;
  }
  else if (opplay == 1 && apmak == 0){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Win!!!!" << endl;
  }
  else if (opplay == 1 && apmak == 2){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Derrota!" << endl;
  }
  else if (opplay == 2 && apmak == 0){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Derrota!" << endl;
  }
  else if (opplay == 2 && apmak == 1){
     cout << "Seu numero:"<< opplay <<"Numero da maquina:"<< apmak << "Win!!!!" << endl;
  }
}
    return 0;
    

}