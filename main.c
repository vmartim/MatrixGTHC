#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
    printf("Calculadora\n");
    printf("1. para somar\n");
    printf("2. para subtrair\n");
    printf("3. para multiplicar duas matrizes\n");
    printf("4. para multiplicação escalar\n");
    printf("5. para verificar se eh quadrada\n");
    printf("6. para calcular a matriz transposta\n");
    printf("7. para verificar se a matriz eh simetrica\n");
    printf("8. para imprimir\n");

    printf("Digite sua escolha: ");
    int n;  
    scanf("%d", &n);

    Matrix* A = getMatrix('A');
    
    if(n <= 3){
        Matrix* B = getMatrix('B');
        
        switch(n){
            case 1:
                sumMatrix(A, B);
                break;
            case 2:
                subMatrix(A, B);
                break;
            case 3:
                multMatrix(A, B);
                break;
        }
        
        free(B);
        
    } else {
        switch(n){
            case 4:
                multEsc(A);
                break;
            case 5:
                quadMatrix(A);
                break;
            case 6:
                transMatrix(A);
                break;
            case 7:
                simMatrix(A);
                break;
            case 8:
                printMatrix(A);
                break;
        }
        
    }
    
    free(A);
    
    return 0;
}