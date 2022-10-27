// Aravind Chandra
// Java Program to find
// Newman-Shanks-Williams prime
class GFG
{
// return nth Newman-Shanks-Williams
// prime
static int nswp(int n)
{
	// Base case
	if (n == 0 || n == 1)
		return 1;

	// Recursive step
	return 2 * nswp(n - 1) + nswp(n - 2);
}

// Driver code
public static void main (String[] args)
{
	int n = 3;
	System.out.println(nswp(n));
}
}

