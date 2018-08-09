/*
//Interface for a method of looping over inputs and encoding them.
//
//Copyright (c) 2018, Jeffrey Takahashi
*/

/*
//The following text is copied/adapted from original Backblaze documentation. All credit to
//those kind people.

//All available coding loop algorithms.

The different choices nest the three loops in different orders, and either use the log/exponent
tables, or use the multiplication tables.

The naming of the three loops is (with number of loops in benchmark):

	"byte"	- Index each byte within shard (200,000 bytes in each shard)
	"input"	- Which input shard is being computed (17 data shards)
	"output"- Which output shard is being computed (three parity shards)

And the naming for multiplication methods is:

	"table"	- use the multiplication table
	"exp"	- Use the logarithm/exponent table

The ReedSolomonBenchmark class compares the performance of the different loops, which will depend
on the specific processor you're running on.

This is the inner loop, it will need to be fast, be careful with changes.

Backblaze writers previously tried to inline java functionality to no speed gains, probably
because JIT compilation.
*/

//This hurts my head
//because of inheritance...
//Will return to this later
