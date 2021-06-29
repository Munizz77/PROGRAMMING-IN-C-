#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    srand( (unsigned)time(NULL) );

    int a;
    float b, c;

    for(a = 1; a <= 5; a++){
        cout << "\nDigite sua opção para jogar\n 0 = Pedra\n 1 = Papel\n 2 = Tesoura" << endl;
        cin >> b;
    c = (rand() % 101); 
    if(b > c){
    cout << "Seu numero:"<< b <<"Numero da maquina:"<< c << "Win!!!!!" << endl;
    break;
    }
    else if (b < c){
     cout << "Seu numero:"<< b <<"Numero da maquina:"<< c << "Derrota" << endl;
    }

}
    return 0;
    

}