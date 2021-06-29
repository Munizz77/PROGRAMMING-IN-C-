#include <iostream>
#include <cstdlib>


using namespace std;

int main(){

float a, result2, result3;

cout << "\nDigite um numero para saber sua polegada" << endl;
cin >> a;  
 

result2 = a * 100;
result3 = result2 / 2.54 ;

cout << a << " Metros em polegada e: " <<  result3 << endl;

  
    return(0);
}