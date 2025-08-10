#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

Matrix* getMatrix (char name) {
	Matrix* mat = malloc(sizeof(Matrix));

	mat->name = name;

	printf("Digite as #linhas e #colunas para a matriz %c: \n", mat->name);

	scanf("%d", &mat->lines);
	scanf("%d", &mat->cols);

	printf("Digite os elementos da matriz %c, uma matriz %d x %d \n", mat->name, mat->lines, mat->cols);

	for(int i = 0; i < mat->lines; i++) {
		printf("%d entradas para a linha %d\n", mat->cols, i+1);

		for(int j = 0; j < mat->cols; j++) {
			scanf("%d", &mat->data[i][j]);
		}
	}

	return mat;
}

void sumMatrix (Matrix* matA, Matrix* matB) {
	if (matA->lines != matB->lines || matA->cols != matB->cols) {
		printf("Matrizes de tamanho incompativel para soma");
		return;
	}

	Matrix* matC = malloc(sizeof(Matrix));
	matC->lines = matA->lines;
	matC->cols = matA->cols;
    matC->name = 'C';

	for (int i = 0; i < matA->lines; i++) {
		for (int j = 0; j < matA->cols; j++) {
			matC->data[i][j] = matA->data[i][j] + matB->data[i][j];
		}
	}

	printMatrix(matC);

	free(matC);
}

void subMatrix (Matrix* matA, Matrix* matB) {
	if (matA->lines != matB->lines || matA->cols != matB->cols) {
		printf("Matrizes de tamanho incompativel para subtracao");
		return;
	}

	Matrix* matC = malloc(sizeof(Matrix));
	matC->lines = matA->lines;
	matC->cols = matA->cols;
    matC->name = 'C';

	for (int i = 0; i < matA->lines; i++) {
		for (int j = 0; j < matA->cols; j++) {
			matC->data[i][j] = matA->data[i][j] - matB->data[i][j];
		}
	}

	printMatrix(matC);

	free(matC);
}

void multMatrix (Matrix* matA, Matrix* matB) {
	if (matA->cols != matB->lines) {
		printf("Matrizes de tamanho incompativel para multiplicacao");
		return;
	}

	Matrix* matC = malloc(sizeof(Matrix));
	matC->lines = matA->lines;
	matC->cols = matB->cols;
    matC->name = 'C';

	for (int i = 0; i < matC->lines; i++) {
        for (int j = 0; j < matC->cols; j++) {
            matC->data[i][j] = 0;
            
            for (int k = 0; k < matA->cols; k++) {
                matC->data[i][j] += matA->data[i][k] * matB->data[k][j];
            }
        }
    }

	printMatrix(matC);
	
	free(matC);
}

void printMatrix (Matrix* mat) {
	printf("Matriz gerada %c: \n", mat->name);

	for(int i = 0; i < mat->lines; i++) {
		for(int j = 0; j < mat->cols; j++) {
			printf("%d ", mat->data[i][j]);
		}

		printf("\n");
	}
}
