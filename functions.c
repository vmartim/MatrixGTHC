#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

Matrix* getMatrix (char name) {
	Matrix* mat = malloc(sizeof(Matrix));

	mat->name = name;

	printf("Digite as #linhas e #colunas para a matriz %c: ", mat->name);

	scanf("%d", &mat->lines);
	scanf("%d", &mat->cols);

	printf("Digite os elementos da matriz %c, uma matriz %d x %d \n", mat->name, mat->lines, mat->cols);

	for(int i = 0; i < mat->lines; i++) {
		printf("%d entradas para a linha %d: ", mat->cols, i+1);

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

	Matrix* matR = malloc(sizeof(Matrix));
	matR->lines = matA->lines;
	matR->cols = matA->cols;
    matR->name = 'R';

	for (int i = 0; i < matA->lines; i++) {
		for (int j = 0; j < matA->cols; j++) {
			matR->data[i][j] = matA->data[i][j] + matB->data[i][j];
		}
	}

	printMatrix(matR);
	free(matR);
}

void subMatrix (Matrix* matA, Matrix* matB) {
	if (matA->lines != matB->lines || matA->cols != matB->cols) {
		printf("Matrizes de tamanho incompativel para subtracao");
		return;
	}

	Matrix* matR = malloc(sizeof(Matrix));
	matR->lines = matA->lines;
	matR->cols = matA->cols;
    matR->name = 'R';

	for (int i = 0; i < matA->lines; i++) {
		for (int j = 0; j < matA->cols; j++) {
			matR->data[i][j] = matA->data[i][j] - matB->data[i][j];
		}
	}

	printMatrix(matR);
	free(matR);
}

void multMatrix (Matrix* matA, Matrix* matB) {
	if (matA->cols != matB->lines) {
		printf("Matrizes de tamanho incompativel para multiplicacao");
		return;
	}

	Matrix* matR = malloc(sizeof(Matrix));
	matR->lines = matA->lines;
	matR->cols = matB->cols;
    matR->name = 'R';

	for (int i = 0; i < matR->lines; i++) {
        for (int j = 0; j < matR->cols; j++) {
            matR->data[i][j] = 0;
            
            for (int k = 0; k < matA->cols; k++) {
                matR->data[i][j] += matA->data[i][k] * matB->data[k][j];
            }
        }
    }

	printMatrix(matR);
	free(matR);
}

void multEsc (Matrix* mat){
    printf("Digite o escalar: ");
    int esc;
    scanf("%d", &esc);
    
    Matrix* matR = malloc(sizeof(Matrix));
	matR->lines = mat->lines;
	matR->cols = mat->cols;
    matR->name = 'R';
    
    for (int i = 0; i < matR->lines; i++){
        for (int j = 0; j < matR->cols; j++){
            matR->data[i][j] = mat->data[i][j] * esc;
        }
    }
    
    printMatrix(matR);
    free(matR);
}

void quadMatrix (Matrix* mat){
    if(mat->lines == mat->cols){
        printf("A matriz eh quadrada");
    } else {
        printf("A matriz nao eh quadrada");
    }
}

void transMatrix (Matrix* mat){
    Matrix* matR = malloc(sizeof(Matrix));
	matR->lines = mat->cols;
	matR->cols = mat->lines;
    matR->name = 'R';
    
    for (int i = 0; i < matR->lines; i++){
        for (int j = 0; j < matR->cols; j++){
            matR->data[i][j] = mat->data[j][i];
        }
    }
    
    printMatrix(matR);
    free(matR);
}

void simMatrix (Matrix* mat){
    if (mat->cols != mat->lines) {
		printf("Nao eh simetrica pois nao eh quadrada");
		return;
	}
	
    for (int i = 0; i < mat->lines; i++){
        for (int j = 0; j < mat->cols; j++){
            if(mat->data[i][j] != mat->data[j][i]){
                printf("A matriz nao eh simetrica");
                return;
            }
        }
    }
    
    printf("A matriz eh simetrica");
}

void printMatrix (Matrix* mat) {
	printf("Matriz %c gerada: \n", mat->name);

	for(int i = 0; i < mat->lines; i++) {
		for(int j = 0; j < mat->cols; j++) {
			printf("%d ", mat->data[i][j]);
		}

		printf("\n");
	}
}
