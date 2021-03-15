#include <iostream>
#include <cstdlib>


using namespace std;

// int  : TIPO INTEIRO 
// STR  : TEXTO
// FLOAT  : NUMERO QUEBRADO

int main(){

int N1, N2, result1, result2, result3;

cout << "\nDigite o primeiro numero para o N1 para saber sua soma subtracao e multiplicacao" << endl;
cin >> N1;  


cout << "\nDigite o segundo para saber sua soma subtracao e multiplicacao" << endl;
cin >> N2;  

result1 = N1 + N2;
result2 = N1 - N2;
result3 = N1 * N2;

cout << "A Soma de N1 + N2 E: " << result1 << endl;
cout << "A Subtracao de N1 - N2 E: " << result2 << endl;
cout << "A Multiplicacao de N1 * N2 E: " << result3 << endl;



   
    return(0);
}