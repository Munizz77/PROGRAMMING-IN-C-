#include <iostream>
#include <cstdlib>


using namespace std;

// int  : TIPO INTEIRO 
// STR  : TEXTO
// FLOAT  : NUMERO QUEBRADO

int main(){

int a, result1, result2, result3;

cout << "\nDigite o primeiro um numero para o para saber seu dobro e triplo" << endl;
cin >> a;  
 

result1 = a;
result2 = a * 2;
result3 = a * 3;

cout << "O seu numero e : " << result1 << endl;
cout << "O dobro desse e : " << result2 << endl;
cout << "O triplo numero e : " << result3 << endl;



   
    return(0);
}