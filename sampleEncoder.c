/*
//sampleEncoder.c
//
//Command line program to encode one file using Reed-Solomon 4+2
//
//One argument should be file name (ex. "bar.txt"). This program
//will create six files in the same directory, breaking the input
//file into four data shards and two parity shards. The output
//files are called "bar.txt.0", "bar.txt.1", ..., and "bar.txt.5".
//Files 4 and 5 are the parity shards.
//
//Data stored is four byte int followed by the contents of the file
//and then padded with a multiple of four bytes with zeroes. The
//padding is because all four data shards must be the same size.
*/

#include <stdio.h>


static const int DATA_SHARDS = 4;
static const int PARITY_SHARDS = 2;
static const int TOTAL_SHARDS = 6;
static const int BYTES_IN_INT = 4;

void main(int argc, char ** argv){

	FILE * fp;

	//validate and parse input
	if(argc != 2){
		printf(stderr, "Invalid number of inputs, try again.\n");
		return -1;
	}

	//maybe validate file because proper, but effort
	fp = fopen(argv[1], "r");

	//Find size of file
	//const int filesize = (int) fp.length;

	//Figure out the size of each shard, total size will be
	//file size (8 bytes) plus file
	//const int storedSize = fileSize + BYTES_IN_INT;
	//const int shardSize = (storedSize + DATA_SHARDS - 1) / DATA_SHARDS;

	//to be cont...
}
