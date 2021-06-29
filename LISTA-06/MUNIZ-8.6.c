#include <iostream>

using namespace std;
int main(void) {
  int a = 0;
  int b = 1;
  int c = 0;

  while(a <= 9){
    cout <<"\n-- Tabuada do numero \n"<< a << endl;
    while(c <= 10){
      b = a * c;
      cout << a << "*" << c << "=" << b << endl;
      c++;
    }

    a++;
    c = 0;
  }

  return 0;
}