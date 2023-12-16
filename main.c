/*
        - KHALID SAQLAIN - 3CIN - 25/11/23 - VERIFICA - Quesito C -
*/


#include <stdio.h>

const int LEN = 10;

void fillMatrice(int matrice[LEN][LEN], int valore);
void printMatrice(int matrice[LEN][LEN]);
void diagonali(int matrice[LEN][LEN], int num);
void cornice(int matrice[LEN][LEN], int num);


int main() {
    
    int matSK[LEN][LEN];
    
    printf("SAQLAIN KHALID\n"); 
    
    fillMatrice(matSK, 0);
    diagonali(matSK, 29);
    cornice(matSK, 5);
    printMatrice(matSK);

    return 0;
}


void fillMatrice(int matrice[LEN][LEN], int valore) {
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            matrice[i][j] = valore;
        }
    }
}


void diagonali(int matrice[LEN][LEN], int num) {
    for (int i = 0; i < LEN; i++) {
        matrice[i][i] = num;              
        matrice[i][LEN - 1 - i] = num;  
    }
}


void cornice(int matrice[LEN][LEN], int num) {
    
    for (int i = 0; i < LEN; i++) {
        matrice[i][0] = num;                
        matrice[i][LEN - 1] = num;       
    }

    for (int i = 0; i < LEN; i++) {
        matrice[0][i] = num;                
        matrice[LEN - 1][i] = num;       
    }
}


void printMatrice(int matrice[LEN][LEN]) {
    for (int i = 0; i < LEN; i++) {
        for (int j = 0; j < LEN; j++) {
            printf("%2d ", matrice[i][j]);
        }
        printf("\n");
    }
}



