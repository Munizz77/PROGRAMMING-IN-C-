#include <iostream>

using namespace std;

int main(){

     float skin, a, a1, b, b1;
        cout << "Digite a quantidade de Skins que voce queira: \n"<< skin << endl;
            if(skin < 10){
                a = 1.30;       a1 = skin * a;
                cout << "O valor total da compra e R$:" << a1<< endl;
            }else if( skin > 10){
                b = 1;          b1 = skin * b;
                cout << "O valor total da compra e R$:"<< b1<< endl;


  }

}