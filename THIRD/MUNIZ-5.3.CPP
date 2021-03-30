#include <iostream>

using namespace std;


int main(){

    float n1, n2, r1,r2, d1, r3;

cout << "\nDigite um numero inteiro" << endl;
cin >> n1;
cout << "\nDigite um numero inteiro " << endl;
cin >> n2;  
cout << "\nDigite um numero real" << endl;
cin >> d1;
  
r1 = n1 * 2 * (n2 / 2);
r2 = (n1 *  3) + d1;
r3 = d1*d1*d1;


cout << "Produto do dobro do primeiro com metade do segundo: "<< r3 << endl;
cout << "A soma do triplo do primeiro com o terceiro: "<< r2 << endl;
cout << "O terceiro elevado ao cubo: "<< r3 << endl;

        return(0);
}