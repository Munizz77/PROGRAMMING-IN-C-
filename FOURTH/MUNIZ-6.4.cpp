#include <iostream>

using namespace std;

int main(){

    int v1, d1, empate1, v2, d2, empate2, thupoint, divipoint;
    char e1[60] = "Thunders";
    char e2[60] = "Divination";

cout << "\nNome da equipe 1:  " << endl;
cin >> e1;
cout << "\nNome da equipe 2:  " << endl;
cin >> e2;
/*===========================================*/
cout << "\nVitorias da equipe Thunders:" << endl;
cin >> v1;
/*===========================================*/
cout << "\nDerrotas da equipe Thunders:" << endl;
cin >> d1;
/*===========================================*/
cout << "\nEmpate da equipe Thunders:" << endl;
cin >> empate1;
/*===========================================*/
cout << "\nVitorias da equipe Divination:" << endl;
cin >> v2;
/*===========================================*/
cout << "\nDerrotas da equipe Divination:" << endl;
cin >> d2;
/*===========================================*/
cout << "\nEmpate da equipe Divination:" << endl;
cin >> empate2;
/*===========================================*/

thupoint =  (v1 * 3) + empate1;
divipoint = (v2 * 3) + empate2;

cout << "Equipe"<< e1 <<"Vitorias"<< v1 << "Derrotas" << d1 <<"Empates"<< empate1 <<" Total de Pontos" << thupoint<<endl;
cout << "Equipe"<< e2 <<"Vitorias"<< v2 << "Derrotas" << d2 <<"Empates"<< empate2 <<" Total de Pontos" << divipoint<<endl;
    

    return 0;
    

}