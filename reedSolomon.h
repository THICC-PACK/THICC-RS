/*
//Reed-Solomon Coding over 8-bit values
//
//
//
*/

#ifndef REED_SOLOMON_H
#define REED_SOLOMON_H

struct reedSolomon{
	const int dataShardCount;
	const int parityShardCount;
	const int totalShardCount;
	//Matrix
	//CodingLoop

	//Rows from the matrix for encoding parity, each one as own
	//byte array to allow for efficient access while encoding
	const char parityRows[][];
}
