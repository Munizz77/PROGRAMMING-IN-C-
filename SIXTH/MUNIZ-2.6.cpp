#include <iostream>
#include <time.h>

using namespace std;

int main(void) {
  srand( (unsigned)time(NULL) );
  int a, b;
  a = 0;
  do{
    int b = rand() % 100;
    cout << b << endl;
    a++;
  }while( a <= 9);

return 0;
}