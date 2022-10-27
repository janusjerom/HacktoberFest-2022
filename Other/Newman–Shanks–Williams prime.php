// Aravind Chandra
// PHP Program to find
// Newman–Shanks–Williams prime

<?php


// return nth Newman –
// Shanks – Williams prime
function nswp($n)
{
	
	// Base case
	if ($n == 0 || $n == 1)
		return 1;

	// Recursive step
	return 2 * nswp($n - 1) +
			nswp($n - 2);
}

// Driver Code
$n = 3;
echo(nswp($n));

// This code is contributed by Ajit.
?>
