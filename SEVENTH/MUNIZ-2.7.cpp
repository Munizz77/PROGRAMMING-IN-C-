#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>


using namespace std;

int main(void) {

  srand( (unsigned)time (NULL) );
	int i, reserva, j, FaceD = 0, njogadas = 0, vs = 1000, min = 1, max = 7;
	float guarda, cont = 0, frequencia1 = 0, frequencia2 = 0, frequencia3 = 0, frequencia4 = 0, frequencia5 = 0, frequencia6 = 0, bau[6] , t = 6;
	
	while (njogadas <= vs){
		FaceD = min + (rand() % (max - min));
		switch(FaceD){
			case 1:
				frequencia1++;
				break;
			case 2:
				frequencia2++;
				break;
			case 3:
				frequencia3++;
				break;
			case 4:
				frequencia4++;
				break;
			case 5:
				frequencia5++;
				break;
			case 6:
				frequencia6++;
        break;
		}
		njogadas++;	
	}
  bau[0] = frequencia1; 
  bau[1] = frequencia2; 
  bau[2] = frequencia3; 
  bau[3] = frequencia4; 
  bau[4] = frequencia5; 
  bau[5] = frequencia6;
 
  guarda = bau[0];

    for (i = 0; i <= t; i++) {
      
      if(bau[i] == guarda){
      }else{
        cont++;
      }
    }
       
    cout << "frequência de cada face do dado:\n" << endl;
	printf("Frequencia que sai a face 1:\n", (frequencia1/1000)*100);
	printf("Frequencia que sai a face 2:\n", (frequencia2/1000)*100);
	printf("Frequencia que sai a face 3:\n", (frequencia3/1000)*100);
	printf("Frequencia que sai a face 4:\n", (frequencia4/1000)*100);
	printf("Frequencia que sai a face 5:\n", (frequencia5/1000)*100);
	printf("Frequencia que sai a face 6:\n", (frequencia6/1000)*100);

  if(cont > 0){
    cout << "Dado viciado." << endl;
  }else{
    cout << "Dado Honesto."<< endl;
  }
 
	 	
  
  return 0;
}