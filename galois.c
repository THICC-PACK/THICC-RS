/*
  8-bit Galois field
  Copyright 2018, Jeffrey Takahashi
*/

/*
  8-bit Galois Field

  Thisimplements multiplication, division, addition,
  subtraction, and exponentiation.

  See notes in original Backblaze, Inc. docs
*/

#include "galois.h"

//stuff goes here
//more
//more
//probably more

/*
  Adds two elements in a field
*/
static uint8_t add(uint8_t a, uint8_t b){
	return (uint8_t) (a ^ b);
}

/*
  Inverse of add
*/
static uint8_t subtract(uint8_t a, uint8_t b){
	return (uint8_t) (a ^ b);
}

/*
  Multiply two elements in a field
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
  Inverse of multiply
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
//generate log table
//generate exp table
//generate mult table
//generate all possible polynomials
