#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(void) {
  printf("\nVocê deverá acertar as Operações matematicas\n");

  srand( (unsigned)time(NULL) );

  int r; int c = 0; int cv = 0; int cd = 0; int n1; int n2; int resultado;

  for(int i = 0; i < 4; i++){
    n1 = rand() % 9;
    n2 = rand() % 9;
    resultado = n1 + n2;

    cout << "\nOperação\n"<< n1 << n2<< endl;
    cout << "Resposta:"<< endl;
    cin >> r;

    if(r == resultado) {
     cout <<"Voce acertou."<< endl;
      cv++;
      c++;
    }else{
      cout <<"Errastes."<< endl;
      cd++;
      c++;
      if(cd == 2){
        cout << "\nGAME OVER.\nVoce perdeu pois errou duas perguntas.\n-Resuldado-\nAcertos: \nErros:\n" << cv << cd << endl;
        break;
      }
    }

    if(cv == 3 && cd ==1){
        cout << "\n\nFim.\nVoce ganhou.\n-Resuldado-\nAcertos:\nErros:\n"<< cv << cd << endl; 
      }else if(cv == 4){
        cout << "\n Boa!! voce acertou todas.\n-Resuldado-\nAcertos:\nErros:\n" << cv << cd << endl;
      }
   }
  return 0;
}