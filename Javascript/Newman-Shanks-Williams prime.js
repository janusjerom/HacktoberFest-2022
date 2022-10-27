// Aravind Chandra
// Javascript Program to find Newman-Shanks-Williams prime


<script>
	
	// return nth Newman-Shanks-Williams
	// prime
	function nswp(n)
	{
		
		// Base case
		if (n == 0 || n == 1)
			return 1;

		// Recursive step
		return 2 * nswp(n - 1) + nswp(n - 2);
	}
	
	let n = 3;
		
	document.write(nswp(n));
	
	// This code is contributed by mukesh07.
</script>
