#include <iostream>

using namespace std;

int main(){

    int qntV, qntD, qntE, a,v1,e1,d1;
 
cout << "\nQuantidade de vitorias: " << endl;
cin >> qntV;
cout << "\nQuantidade de derrotas: " << endl;
cin >> qntD;
cout << "\nQuantidade de empates: " << endl;
cin >> qntE;

a = qntV + qntE + qntD;

v1 = qntV * 100 / a;
e1 = qntE * 100 / a;
d1 = qntD * 100 / a;

cout <<"Vitorias"<< qntV << "Derrotas" << qntD <<"Empates"<< qntE <<" Percentual de Vitoria:" << v1 << " Percentual de Derrota:"<< d1 <<" Percentual de Empate:" << e1 <<endl;
    return 0;
    

}