#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int qntV, qntD, qntE, a,v1,e1,d1;

    char eClasse[60]; 
    char eRegiao[60];
    char eArma[60];
 
cout << "\nEscolha uma das classes: Guerreiro - Druida - Mago - Sacerdote: " << endl;
cin >> eClasse;

 if((strcmp (eClasse, "guerreiro") == 0) || (strcmp (eClasse, "mago") == 0) | (strcmp (eClasse, "druida") == 0) || (strcmp (eClasse, "sacerdote") == 0) )
  {
    cout <<"\nAgora escolha sua regiao: Azeroth - Azkaban - Aurora -  Brightwood:\n"<< eRegiao <<endl;

    cout <<"\nAgora escolha sua arma: Machado cego - Picareta invertida - Adaga sem ponta - Corrente sem elo:\n"<< eArma <<endl;

    cout <<"\nVoce é um %s da regiao de %s armado com um %s\n"<< eClasse << eRegiao << eArma <<endl;
   
  }else{
    cout <<"Sua classe não existe. Impossivel continuar."<<endl;
  }

    return 0;
    

}