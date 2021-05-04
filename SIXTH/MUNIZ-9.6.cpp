#include <iostream>

using namespace std;
int main(void) {
  int a = 1; int b = 0;
  do{
    cout<< a << endl;
    b += a++;
  }while (a <= 10);
    cout << "Soma dos numeros:"<< b << endl;
  return 0;
}