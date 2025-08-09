#include <stdio.h>
#include "functions.h"

#define MAX 100

void getMatrix (int mat[MAX][MAX], char name, int* lines, int* cols){
    printf("Digite as #linhas e #colunas para a matriz %c: \n", name);

    scanf("%d", lines);
    scanf("%d", cols);

    printf("Digite os elementos da matriz %c, uma matriz %d x %d \n", name, *lines, *cols);
    
    for(int i = 0; i < *lines; i++){
        printf("%d entradas para a linha %d\n", *cols, i+1);
        
        for(int j = 0; j < *cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
}


void printMatrix (int mat[MAX][MAX], int lines, int cols){
    printf("Matriz gerada: \n");
    
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", mat[i][j]);
        }
        
        printf("\n");
    }
}
