#include<stdio.h>
#include <time.h>

int main(void) {
 /*[Projeto 01] Faça um procedimento que receba um número inteiro entre 1 e 12 (referente aos meses do ano) e imprima o calendário deste mês para o ano de 2020. Não precisa usar cores diferentes. Exemplo:*/

  int numeroInteiro, i ,j , cont, contCalendar;
  
  //char mesesTrinta = "1,,3,5,7,8,10,12"
  char meses[12][10] =
    {
        "JANEIRO",
        "FEVEREIRO",
        "MARÇO",
        "ABRIL",
        "MAIO",
        "JUNHO",
        "JULHO",
        "AGOSTO",
        "SETEMBRO",
        "OUTUBRO",
        "NOVEMBRO",
        "DEZEMBRO"
    };

  
  do{
  printf("Digite um número inteiro: ");
  scanf("%d", &numeroInteiro);
    
    if(numeroInteiro > 0 && numeroInteiro < 13){
      
      numeroInteiro = numeroInteiro - 1;
      for(i=0; i<1; i++){
        for(j=0; j<10; j++){
            //printf("%c", meses[numeroInteiro-1][j]);
        }
        if(numeroInteiro == 1){
          printf("\n\n   --------------------------\n"
              "         %s, 2020\n "
              "  -------------------------- \n"
              "   D   S   T   Q   Q   S   S \n" 
              "   01  02  03  04  05  06  07 \n" 
              "   08  09  10  11  12  13  14 \n" 
              "   15  16  17  18  19  20  21 \n" 
              "   22  23  24  25  26  27  28 \n"
              "   29"
              " ",meses[numeroInteiro]);
        }else if(numeroInteiro == 0 || numeroInteiro == 2 ||
                numeroInteiro == 4 || numeroInteiro == 6 ||
                numeroInteiro == 7 || numeroInteiro == 9 ||
                numeroInteiro == 11){
        printf("\n\n   --------------------------\n"
              "          %s, 2020\n "
              "  -------------------------- \n"
              "   D   S   T   Q   Q   S   S \n" 
              "   01  02  03  04  05  06  07 \n" 
              "   08  09  10  11  12  13  14 \n" 
              "   15  16  17  18  19  20  21 \n" 
              "   22  23  24  25  26  27  28 \n"
              "   29  30  31"
              " ",meses[numeroInteiro]);
        }else{
          printf("\n\n   --------------------------\n"
              "          %s, 2020\n "
              "  -------------------------- \n"
              "   D   S   T   Q   Q   S   S \n" 
              "   01  02  03  04  05  06  07 \n" 
              "   08  09  10  11  12  13  14 \n" 
              "   15  16  17  18  19  20  21 \n" 
              "   22  23  24  25  26  27  28 \n"
              "   29  30  "
              " ",meses[numeroInteiro]);
        }
      }
    }else{
      printf("Número não está entre 1 e 12, favor repetir com um número correto.");
    }
    printf("\n\n\nDeseja verificar outro mês? (1-sim) (2-não)");
    scanf("%d", &contCalendar);
    }while(contCalendar == 1);
 
  return 0;
}