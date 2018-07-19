/*
//Matrix algebra over an 8-bit Galois field
//
//Copyright 2018, Jeffrey Takahashi
*/

//Matrix over 8-bit Galois field
//The original implementation explicitly was not built for
//performance. Expect heavy editing later.

#ifndef MATRIX_H
#define MATRIX_H

typedef struct {
	//num rows, cols in matrix
	static int rows;
	static int columns;
	static matrix_byte data;
} matrix;

typedef struct {
	uint8_t* d;
	uint16_t m,n;
} matrix_byte;

Matrix* newMatrix(int initRow, int initCol);
Matrix* newMatrix(char initData[][]);
static Matrix* identity(int size);
//more --> toString
//more --> toBigString
int getRows(Matrix* p);
int getCols(Matrix* p);
char get(int r, int c);
bool set(int r, int c, char value);
bool equals(Matrix* left, Matrix* right);
Matrix* multiply(Matrix* left, Matrix* right);
Matrix* augment(Matrix* left, Matrix* right);
Matrix* subMatrix(int rmin, int cmin, int rmax, int cmax);
//char[] getRow(int row);
void swapRows(Matrix* p, int r1, int r2);
Matrix* invert(Matrix* p);
Matrix* gaussianElimination(Matrix* p);
