/*
//sampleEncoder.c
//
//Command line program to encode one file using Reed-Solomon 4+2
//
//One argument should be file name (ex. "bar.txt") to decode. This
//program will expect to find "bar.txt.0", "bar.txt.1", ...,
//"bar.txt.5" with, at most, two missing. It will then write to
//"bar.txt.decode".
*/

#include <stdio.h>
#include "params.h"

void main(int argc, char ** argv){

	FILE * inpf;

	//validate and parse input
	if(argc != 2){
		printf(stderr, "Invalid number of inputs, try again.\n");
		return -1;
	}

/*
maybe validate file because this is trash.
*/


}
