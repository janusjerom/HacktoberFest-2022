// Jerom Joseph
// A Naive recursive implementation of 0-1 Knapsack problem

<?php

// Returns the maximum value that
// can be put in a knapsack of
// capacity W
function knapSack($W, $wt, $val, $n)
{
	// Base Case
	if ($n == 0 || $W == 0)
		return 0;
	
	// If weight of the nth item is
	// more than Knapsack capacity
	// W, then this item cannot be
	// included in the optimal solution
	if ($wt[$n - 1] > $W)
		return knapSack($W, $wt, $val, $n - 1);
	
	// Return the maximum of two cases:
	// (1) nth item included
	// (2) not included
	else
		return max($val[$n - 1] +
			knapSack($W - $wt[$n - 1],
			$wt, $val, $n - 1),
			knapSack($W, $wt, $val, $n-1));
}

	// Driver Code
	$val = array(60, 100, 120);
	$wt = array(10, 20, 30);
	$W = 50;
	$n = count($val);
	echo knapSack($W, $wt, $val, $n);

// This code is contributed by Sam007
?>
