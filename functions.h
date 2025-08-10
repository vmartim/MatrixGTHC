#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX 100

typedef struct {
    char name;
    int data[MAX][MAX];
    int lines;
    int cols;
} Matrix;

Matrix* getMatrix (char name);
void sumMatrix (Matrix* matA, Matrix* matB);
void subMatrix (Matrix* matA, Matrix* matB);
void multMatrix (Matrix* matA, Matrix* matB);
void multEsc (int mat[MAX][MAX], int n);
void quadMatrix (int mat[MAX][MAX]);
void transMatrix (int mat[MAX][MAX]);
void simMatrix (int mat[MAX][MAX]);
void printMatrix (Matrix* mat);

#endif