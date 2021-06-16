#include <stdio.h>
#include <iostream>


using namespace std;

int main(void) {
  int n, c = 0, c2 = 0;
  
  printf("\nDigite um número para saber 5 ímpares antes e 5 pares depois\n");
  cin >> n; cout <<"\n"<<endl;
  
  
   for(int antes = n; c < 5; antes++){
    if( antes % 2 == 0){
        cin >> antes;
        c++;
        cout <<"\n"<<endl;
    }
  }
 
  for(int depois = n; c2 < 6; depois--){
   if( depois % 2 == 0){
   }else{
     cin >> depois;
     c2++;
   }
  }

 

  
  
 
  
  return 0;
}