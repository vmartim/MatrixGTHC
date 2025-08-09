#ifndef FUNCOES_H
#define FUNCOES_H

#define MAX 100

void getMatrix (int mat[MAX][MAX], char name, int* lines, int* cols);
void sumMatrix (int matA[MAX][MAX], int matB[MAX][MAX]);
void subMatrix (int matA[MAX][MAX], int matB[MAX][MAX]);
void multMatrix (int matA[MAX][MAX], int matB[MAX][MAX]);
void multEsc (int mat[MAX][MAX], int n);
void quadMatrix (int mat[MAX][MAX]);
void transMatrix (int mat[MAX][MAX]);
void simMatrix (int mat[MAX][MAX]);
void printMatrix (int mat[MAX][MAX], int lines, int cols);

#endif