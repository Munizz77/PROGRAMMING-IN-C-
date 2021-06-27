#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char jogo[3][3];
char jogador1[50], jogador2[50], vencedor[50];
int pontuacaoVencedor =0;

void colocarNoRanking() {
  int lista[10], quant = 10;

  FILE *arq = fopen("lista.txt", "w");
    if(arq){
       
        fprintf(arq, "%sPontuacao: %d\n", vencedor, pontuacaoVencedor);
        fclose(arq);
    }
    else
        printf("ERRO: nao foi possivel abrir o arquivo.\n\n");
}

void inicializarMatrizDoJogo() {
    int i,j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            jogo[i][j] = ' ';
        }
    }
}

int verificarSeEValido(char letra) {
    if(letra == 'x' || letra == '0')
        return 1;
    else
        return 0;
}

int VerificarSeCoordenadaEValida(int x, int y) {
    if(x >= 0 && x < 3) {
        if(y >= 0 && y < 3)
            return 1;
    }else{
      printf("\nSuas coordenadas para jogar estão fora do limite ( 0, 1, 2)\nRepita com o coordernada correta por favor.");
    }
    return 0;
}

int posicaoVazia(int x, int y) {
    if(jogo[x][y] != 'x' && jogo[x][y] != '0')
        return 1;
    return 0;
}

int venceuPelasLinhas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(verificarSeEValido(jogo[i][j]) 
            && jogo[i][j] == jogo[i][j+1])
              igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int venceuPelasColunas() {
    int i, j, igual = 1;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 2; j++) {
            if(verificarSeEValido(jogo[j][i]) 
            && jogo[j][i] == jogo[j+1][i])
              igual++;
        }
        if(igual == 3)
            return 1;
        igual = 1;
    }
    return 0;
}

int VenceuPelaDiagonal1() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(verificarSeEValido(jogo[i][i]) 
        && jogo[i][i] == jogo[i+1][i+1])
          igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

int VenceuPelaDiagonal2() {
    int i, igual = 1;
    for(i = 0; i < 2; i++) {
        if(verificarSeEValido(jogo[i][3-i-1]) && jogo[i][3-i-1] == jogo[i+1][3-i-2])
            igual++;
    }
    if(igual == 3)
        return 1;
    else
        return 0;
}

void mostrarMatriz() {
    int lin, col;

    printf("\n    -------------\n    Jogo da Velha\n    -------------\n\t    0  1  2\n");
    for(lin = 0; lin < 3; lin++) {
        printf("\t%d ", lin);
        for(col = 0; col < 3; col++) {
            if(col < 2)
                printf(" %c |", jogo[lin][col]);
            else
                printf(" %c ", jogo[lin][col]);
        }
        if(lin < 2)
            printf("\n\t   ---------\n");
    }
}

void jogar() {
    int x, y, valida, jogadas = 0, ganhou = 0, turnos = 1;

    do {
        do {
            mostrarMatriz();
            printf("\nDigite a coordenada que deseja jogar: ");
            scanf("%d%d", &x, &y);
            valida = VerificarSeCoordenadaEValida(x, y);
            if(valida == 1)
                valida += posicaoVazia(x, y);
        } while(valida != 2);
        if(turnos == 1)
            jogo[x][y] = 'x';
        else
            jogo[x][y] = '0';
        jogadas++;
        turnos++;
        if(turnos == 3)
            turnos = 1;
        ganhou += venceuPelasLinhas();
        ganhou += venceuPelasColunas();
        ganhou += VenceuPelaDiagonal1();
        ganhou += VenceuPelaDiagonal1();
    } while(ganhou == 0 && jogadas < 100);

    if(ganhou != 0) {
        mostrarMatriz();
        if(turnos - 1 == 1){
            printf("\n\nVencedor: %s\n", jogador1);
            strcpy(vencedor, jogador1);
            pontuacaoVencedor++;
            colocarNoRanking();
        }else
            printf("\n\nVencedor: %s\n", jogador2);
            strcpy(vencedor, jogador2);
            pontuacaoVencedor++;
            colocarNoRanking();
    } else
        printf("\nDEU ZEBRA. Empate.\n\n");
}

int main() {

    int contadorDePartidas;
    printf("Nome do primeiro Jogador:  ");
    fgets(jogador1, 50, stdin);
    printf("Nome do segundo Jogador: ");
    fgets(jogador2, 50, stdin);

    do {
        inicializarMatrizDoJogo();
        jogar();
        printf("Desejam jogar novamente? (1-Sim) (2-Nao)\n");
        scanf("%d", &contadorDePartidas);
    } while(contadorDePartidas == 1);

    return 0;
}