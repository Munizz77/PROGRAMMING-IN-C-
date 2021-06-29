#include <iostream>

using namespace std;

int main(){

    float a, b, c;
 
cout << "\nQual o tamanho do arquivo? " << endl;
cin >> a;
cout << "\nVelocidade da internet em mbps: " << endl;
cin >> b;
/*QH*/

c = a /(b / 8);
/*SalarioBruto*/

cout << "O tempo necessario sera de: "<< c << endl;  
    return 0;
    

}