#include <stdio.h>
#include "functions.h"

#define MAX 100

int A[MAX][MAX], linesA, colsA;
int B[MAX][MAX], linesB, colsB;

int main()
{
    printf("Calculadora\n");
    printf("1. para somar\n");
    printf("2. para subtrair\n");
    printf("3. para multiplicar duas matrizes\n");
    printf("4. para multiplicação escalar\n");
    printf("5. para verificar se eh quadrada\n");
    printf("6. para calcular a matriz transposta\n");
    printf("7. para verificar se a matriz eh simetrica\n");
    printf("8. para imprimir\n");

    int n;  
    printf("Digite sua escolha\n");
    scanf("%d", &n);

    getMatrix(A, 'A', &linesA, &colsA);
    
    switch(n){
        case 8:
            printMatrix(A, linesA, colsA);
    }

    return 0;
}