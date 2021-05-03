#include <iostream>

using namespace std;

int main(){


    float a, b, a1, b1, c1, d1;

cout << "\nQuanto você ganha por hora?" << endl;
cin >> a;
/*salarioBruto*/
cout << "\nQuantas horas voce trabalha por mes?" << endl;
cin >> b;
/*QH*/

a1 = a * b;
/*SalarioBruto*/
b1 = a1 * 0.08;
/*Inss*/
c1 = b1 * 0.11;
/*I.Renda*/ 
d1 = a1 * 0.05;
/*Sindicato*/

cout << "Salario bruto do mes"<< a1 << endl;
cout << "O seu Inss : "<< b1 << endl;
cout << "I.renda : "<< c1 << endl;
cout << "Sindicato : "<< d1 << endl;

cout << "O seu salario liquido : "<< a1 - b1 - c1 - d1 << endl;
    return 0;
    

}