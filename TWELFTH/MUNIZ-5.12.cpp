#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

int x, y;

void TestD();
int checarDivisao(int x, int y);

int main() {
	srand(time(NULL));
	TestD();
    return 0;
}

void TestD(){
    int x, y, contador, ResuldadoDiv;

    for (contador = 0; contador < 10; contador++) {
    	x = rand() % 10;
    	y =  1 + (rand() % (10 - 1));
    	ResuldadoDiv = checarDivisao(x, y);
    	
    	cout << "Teste Nº" << contador+1 << endl;
	    cout << "x" << x << endl;
	    cout << "y" << y << endl;
	    cout << "O numero" << x << "é divísivel por:" << y  <<ResuldadoDiv);
    
    }
}

int checarDivisao( x, y ){
	if( x % y == 0){
		return 1;
	}else {
		return 0;
	}
	
}


