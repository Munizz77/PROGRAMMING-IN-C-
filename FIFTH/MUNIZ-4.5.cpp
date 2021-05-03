#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){

    int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g  = 7, h = 8, i = 9, MakD;
    int chutar;
   cout << "\nEscolha um numero para chutar\nA maquina sera o seu adversario.\n=========================\n"
"|	1	|	2	|	3	|\n"
"|	4	|	5	|	6	|\n"
"|	7	|	8	|	9	|\n"
"\n"<< endl;
  cin >> chutar;
  srand( (unsigned)time(NULL) );

  MakD = rand() & 10;
  if ( chutar == MakD){
    cout <<"=========================\n"
    "|	%d	|	%d	|	%d	|\n"
    "|	%d	|	%d	|	%d	|\n"
    "|	%d	|	%d	|	%d	|\n"
"\nDEFESA WIN \n MAQUINA WIN"<< a,b,c,d,e,f,g,h,i << endl;

  }else{
    
      if ( chutar == a){
        a = 0;
      }
      else if ( chutar == b){
        b = 0;
      }else if ( chutar == c){
        c = 0;
      }else if ( chutar == d){
        d = 0;
      }else if ( chutar == e){
        e = 0;
      }else if ( chutar == f){
        f = 0;
      }else if ( chutar == g){
        g = 0;
      }else if ( chutar == h){
        h = 0;
      }
      else if ( chutar == i){
        a = chutar;
      }
    cout <<"=========================\n"
    "|	%d	|	%d	|	%d	|\n"
    "|	%d	|	%d	|	%d	|\n"
    "|	%d	|	%d	|	%d	|\n"
"\nGOLLLL!!! \n YOU WIN"<< a,b,c,d,e,f,g,h,i << endl;
  }

}
    return 0;
    

}