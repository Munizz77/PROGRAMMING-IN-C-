#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
  
	int n, tlinhas = 0, linha, c, espaco = 0, qSimb = 0;

  cout << "Digite um número inteiro positivo" << endl;
  cin >> n;
  
	tlinhas =  n * 2;
	espaco =  n - 1;	

  if( n > 0){
    for(linha = 1 ; linha <=  n; linha++){		
        espaco--;
        qSimb = linha + 1;   

      for(c = 0; c <= tlinhas ; c++){
        if(c <= espaco){
          cin >> " ";

        }else{   
          if(c == n){
            cin >> " ";
          }else if(c < (n + qSimb)){
            cin >> "*";
          }
        }	
      }cin >> "\n" ;
    }	

  }else{
    cout <<"Este número não é positivo"<< endl;
  }
}