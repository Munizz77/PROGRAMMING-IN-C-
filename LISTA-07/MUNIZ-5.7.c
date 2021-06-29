#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(void) {

  int n1, n2, i;
  cout << "Números aleatorios \n" << endl;

  srand( (unsigned)time(NULL) );
   n1 = rand() % 100;
   n2 = rand() % 100;
   cin >> n1,n2;

  if(n1 > n2){
    for(int i = n2; i <= n1; i++){
      cin >> i;
    }

  }if(n2 > n1){
    for(int i = n1; i <= n2; i++){
       cin >> i;
    }

  }else if(n1 == n2){
    cout << "Números iguais" <<endl;
  }

  return 0;
}