/*
//Reed-Solomon Coding over 8-bit values
//
//
//
*/

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
