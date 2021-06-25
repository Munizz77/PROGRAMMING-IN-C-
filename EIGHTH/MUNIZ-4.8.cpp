#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

	srand(time(NULL));
	
	int Vetort = 8, vetorInteiro[Vetort], Vetorp, ValoresMaiores = 0, soma = 0, somaTotal = 0; 
    cout << "Os 8 valores gerando aleatoriamente entre 0 e 50 são:" << endl;
	
	for(Vetorp = 0; Vetorp < Vetort; Vetorp++){	
		vetorInteiro[Vetorp] = rand() % 51;
        "posica" << Vetorp <<vetorInteiro[Vetorp] << endl;				
		if(vetorInteiros[Vetorp] > 30){
			ValoresMaiores++;
			vetorInteiro += vetorInteiro[Vetorp];
		}
		somaTotal += vetorInteiro[Vetorp];
	}
	
	cin "\n";
	cout << "A quantidade de valores maiores que 30 é" <<  ValoresMaiores << endl;
	cout <<"A soma de todos valores maiores que 30 é" <<soma << end;
	cout <<"A soma de todos os valores do vetor é" <<  somaTotal << end;

	return 0;
}