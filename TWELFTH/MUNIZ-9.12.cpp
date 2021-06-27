#include <iostream>
#include<stdio.h>  
#include <math.h>

using namespace std;

float z, e = 2.71828, R;

float sigmoid(float z);

int main() {
	
    cout << "Digite um valor" << endl;
    cin >> z;	
    R = sigmoid(z);
    cout << "Resultado" <<  R << endl;	
    return 0;
}

float sigmoid(float z) {
     return 1 / (1 + (pow(e, -z)));
}



