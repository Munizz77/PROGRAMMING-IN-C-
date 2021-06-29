#include <iostream>


using namespace std;
int main(void) {

  int a = 0;
  do{
     if(a % 2 == 0){
         cout <<"Numero Par:"<< a << endl;
    }
    a++;
  }while(a <=100);

 return 0;
}