#include <iostream>

using namespace std;

int main(){

    float r, p, a, m;

cout << "\nDigite um numero para o raio" << endl;
cin >> r;
  
 
p = (2 * 3.14) * r;
a = 3.14 * (r * r);


cout << "Raio: "<< r << "  Perimetro: " << p << "  Area" << a << endl;

        return(0);
}