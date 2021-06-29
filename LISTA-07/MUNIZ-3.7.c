#include <stdio.h>
#include <iostream>

using namespace std;
int main(void) {
  int n = 0, i;
  cout << "\nDigite um numero aleatorio:" << endl;
  cin >> n ;

  for(i = 0; i < n; i++){
    cin >> i ;
  }
  return 0;
}