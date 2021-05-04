#include <iostream>

using namespace std;
int main(void) {
  int a = 1; int b = 0;
  do{
    if(a % 2 == 0){
      cout << a << endl;
      b += a++;
    }
  b++;
  }while (a <= 100);
 cout << "Soma dos numeros pares"<< b << endl;
  return 0;
}