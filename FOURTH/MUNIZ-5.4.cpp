#include <iostream>

using namespace std;

int main(){

    int a, b, c, exp;
 
cout << "\nDigite sua vida = " << endl;
cin >> a;
cout << "\nDigite seu ataque = " << endl;
cin >> b;
cout << "\nDigite sua defesa = " << endl;
cin >> c;

exp = (a + b + c) / 3;

  if (exp >= 0 && exp <= 25){
    cout <<"Nivel: Novato"<<endl;
  }else if(exp >= 26 && exp <= 50){
   cout <<"Nivel: Mago"<<endl;
  }else if (exp >= 51 && exp <= 75){
    cout <<"Nivel: Mago Supremo"<<endl;
  }else if (exp >= 76 && exp <= 100){
    cout <<"Nivel: Lord das Magias"<<endl;
  }

    return 0;
    

}