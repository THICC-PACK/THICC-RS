/*
//Matrix algebra over an 8-bit Galois field
//
//Copyright (c) 2018, Jeffrey Takahashi
*/

//Matrix over 8-bit Galois field
//The original implementation explicitly was not built for
//performance. Expect heavy editing later.

//Documentation is copied from or adapted from original Backblaze, Inc. documentation.
//All credit and my thanks to them for their work.

#include "matrix.h"

//matrix init for default
Matrix* newMatrix(int initRow, int initCol){
	Matrix* p = malloc(sizeof(Matrix));
	p->row = initRow;
	p->col = initCol;
	return p;
}

//Matrix init for provided row-major data
Matrix* newMatrix(char initData[][]){
	Matrix* p = malloc(sizeof(Matrix));
	p->rows = 0;
	p->columns = 0;
	p->data =

	for(int r = 0; r < p->rows; r++){
//		throw new IllegalArgumentException("Not all rows have the same number of columns");
	}
//	data[r] = new byte[columns];
	for(int c = 0; c < p->columns; c++){
		data[r][c] = initData[r][c];
	}
	return p;
}

//Returns an identity matrix of the given size
static Matrix* identity(int size){
	Matrix* result = newMatrix(size, size);
	for(int i = 0; i < size; i++){
//		result.set(i,i,(byte)1);
	}
	return result;
}

//Return a human-readable cstring of the matrix contents
//Ex: [[1, 2], [3, 4]]
//actual magic here

//Return another human readable of matrix contents
//Ex: 	00 01 02
//	03 04 05
//	06 07 08
//	09 0a 0b
//more actual magic

//Return number of rows in Matrix
static int getRows(Matrix* matrixPassed){
	return matrixPassed->rows;
}

//Return number of columns in Matrix
static int getCols(Matrix* matrixPassed){
	return matrixPassed->cols;
}

//Return value at row r, col c
//stuff

//set value at row r, col c
//

//Returns true IFF two matrices are equivalent
//

//Multiplies this matrix on left by matrix on right
//

//Returns concatenation of matrix on left and matrix on right
//
