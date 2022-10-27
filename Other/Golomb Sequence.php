// Rajesh Mishra
// PHP Program to find first
// n terms of Golomb sequence.

<?php


// Return the nth element
// of Golomb sequence
function findGolomb($n)
{
	
	// base case
	if ($n == 1)
		return 1;

	// Recursive Step
	return 1 + findGolomb($n -
		findGolomb(findGolomb($n - 1)));
}

// Print the first n
// term of Golomb Sequence
function printGolomb($n)
{
	
	// Finding first n terms
	// of Golomb Sequence.
	for ($i = 1; $i <= $n; $i++)
		echo findGolomb($i) , " ";
}

// Driver Code
$n = 9;
printGolomb($n);

// This code is contributed by anuj_67.
?>
