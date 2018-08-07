/*
//Reed-Solomon Coding over 8-bit values
//
*/

#include "reedSolomon.h"

/*
//Create a Reed-Solomon codec with the default coding
*/
static ReedSolomon * create(int newDataShardCount, int newParityCount){

};

/*
//Initializes a new encoder/decoder with the chosen coding loop.
*/
//public ReedSolomon(int dataShardCount, int parityShardCount, CodingLoop codingLoop);

/*
//Return number of data shards
*/
int getDataShardCount(ReedSolomon * rs){
	return rs->dataShardCount;
};

/*
//Return number of Parity shards
*/
int getParityShardCount(ReedSolomon * rs){
	return rs->pariyShardCount;
};

/*
//Return total shard count
*/
int getTotalShardCount(ReedSolmon * rs){
	return rs->totalShardCount;
};

//void encodeParity(byte[][] shards, int offset, int byteCount);
//-----------------figure out boolean option-------------------//
//boolean isParityCorrect(byte[][] shards, int firstByte, int byteCount, byte[] tempBuffer);
//void decodeMissing(byte[][] shards, boolean[] shardPresent, static int offset, static int byteCount);
//void checkBuffersAndSizes(byte[][] shards, int offset, int byteCount);
static Matrix * buildMatrix(int dataShards, int totalShards);
static Matrix * vandermonde(int rows, int cols);
