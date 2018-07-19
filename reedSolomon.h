//Reed-Solomon Coding over 8-bit values
//
//
//
//
//
//(c) 2018, Jeffrey Takahashi

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


