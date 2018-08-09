/*
//8-bit Galois Field

//This implements multiplication, division, addition,
//subtraction, and exponentiation.

//See notes in original Backblaze, Inc. docs. Much of the documentation
//below is copied or adapted from original Backblaze docs. All credit
//and my thanks to them for their work.

//Copyright (c) 2018, Jeffrey Takahashi.
*/

#include "galois.h"

//stuff goes here
//more
//more
//probably more

/*
//Adds two elements in a field
*/
static uint8_t add(uint8_t a, uint8_t b){
	return (uint8_t) (a ^ b);
}

/*
//Inverse of add
*/
static uint8_t subtract(uint8_t a, uint8_t b){
	return (uint8_t) (a ^ b);
}

/*
//Multiply two elements in a field
*/
static uint8_t multiply(uint8_t a, uint8_t b){
	//Mult by zero
	if(a == 0 || b == 0){
		return 0;
	}

	else{
		//do stuff, needs log tables
	}
}

/*
//Division, i.e. inverse of multiply
*/
static uint8_t divide(uint8_t a, uint8_t b){
	if(a == 0){
		return 0;
	}
	else if(b == 0){
		//throw error
	}
	else{
		//log table and exp table stuffs
	}
}

/*
	
*/
static uint8_t exponent(uint8_t a, int n){
	if(n == 0){
		return 1;
	}
	else if(a == 0){
		return 0;
	}
	else{
		//log and exp table stuff
	}
}

/*
//generate log table
*/


/*
//generate exp tablea
*/


/*
//generate multiplication table
*/
static uint8_t ** generateMultiplicationTable(){
	//byte [][] result = new byte [256] [256];
	uint8_t * thing = malloc(stuff);
	uint8_t ** result = malloc(stuff);

	for(int i = 0; i < FIELD_SIZE; a++){
		for(int j = 0; j < FIELD_SIZE; j++){
			//result[a][b] = multiply(uint8_t a, uint8_t b);
		}
	}

	return result;
}

//generate all possible polynomials
