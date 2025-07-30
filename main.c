#include <stdio.h>

#define MAX 100

int lines, cols;

void getMatrix (int mat[MAX][MAX], char name){
    printf("Digite as #linhas e #colunas para a matriz %c: \n", name);
    int i, j;
    scanf("%d", &i);
    scanf("%d", &j);
    
    lines = i;
    cols = j;
    
    printf("Digite os elementos da matriz %c, uma matriz %d x %d \n", name, lines, cols);
    
    for(int i = 0; i < lines; i++){
        printf("%d entradas para a linha %d\n", cols, i+1);
        
        for(int j = 0; j < cols; j++){
            scanf("%d", &mat[i][j]);
        }
    }
}

void printMatrix (int mat[MAX][MAX], char name, int lines, int cols){
    printf("Matriz gerada: \n");
    
    for(int i = 0; i < lines; i++){
        for(int j = 0; j < cols; j++){
            printf("%d ", mat[i][j]);
        }
        
        printf("\n");
    }
}

int main()
{
    printf("Calculadora\n");
    printf("1. para somar\n");
    printf("2. para subtrair\n");
    printf("3. para multiplicação escalar\n");
    printf("4. para multiplicar duas matrizes\n");
    printf("6. para calcular a matriz transposta\n");
    printf("7. para verificar se a matriz eh simetrica\n");
    printf("8. para imprimir\n");

    int n;  
    printf("Digite sua escolha\n");
    scanf("%d", &n);
    
    int A[MAX][MAX];
    getMatrix(A, 'A');
    printMatrix(A, 'A', lines, cols);

    return 0;
}

