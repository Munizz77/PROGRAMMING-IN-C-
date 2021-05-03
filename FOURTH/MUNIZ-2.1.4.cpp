#include <iostream>
#include <math.h>

using namespace std;

int main(){

    float a, b, c, d;

cout << "\nQual o tamanho em metros da sua area quadrada?" << endl;
cin >> a;
/*areaquadrada*/

b = a / 3;
/*Quantidade de Litros*/
c = ceil( b / 18 );
/*Latas*/
d = ceil( c * 80);
/*Valor a ser pago*/ 


cout << "Litros de tintas necessarios = "<< b << endl;
cout << "Latas = "<< c << endl;
cout << "Valor total a ser pago = "<< d << endl;
    
    return 0;
    

}