#include <iostream>

using namespace std;

int main(void) {
  
   int a = 1;
   char plim[60] = "plim";
  do{
     if(a % 4 == 0){
        cout << "plim \n"<< endl;  
    }else{
        cout << a << endl;
    }
    a++;
  }while(a <=100);
;

 return 0;
}