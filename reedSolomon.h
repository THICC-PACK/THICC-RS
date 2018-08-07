/*
//Reed-Solomon Coding over 8-bit values
//
//
//
*/

#ifndef REED_SOLOMON_H
#define REED_SOLOMON_H

typedef struct {
	const int dataShardCount;
	const int parityShardCount;
	const int totalShardCount;
	//Matrix
	//CodingLoop

	//Rows from the matrix for encoding parity, each one as own
	//byte array to allow for efficient access while encoding
	const char parityRows[][];
} ReedSolomon;

static ReedSolomon * create(int newDataShardCount, int newParityCount);
//what is this it has no return
int getDataShardCount(ReedSolomon * rs);
int getParityShardCount(ReedSolomon * rs);
int getTotalShardCount(ReedSolmon * rs);
//void encodeParity(byte[][] shards, int offset, int byteCount);
//-----------------figure out boolean option-------------------//
//boolean isParityCorrect(byte[][] shards, int firstByte, int byteCount, byte[] tempBuffer);
//void decodeMissing(byte[][] shards, boolean[] shardPresent, static int offset, static int byteCount);
//void checkBuffersAndSizes(byte[][] shards, int offset, int byteCount);
static Matrix * buildMatrix(int dataShards, int totalShards);
static Matrix * vandermonde(int rows, int cols);
