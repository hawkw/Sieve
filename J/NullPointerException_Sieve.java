public class Sieve(){
	private boolean primes = new int[50001];
	private int upper, lower;
	
	/**
		Constructor for Sieve
		*/
	public NullPointerException_Sieve() {
		primes[0] = false;
		primes[1] = false;
		lower = 1;
		upper = 50000;
		for (i = 1; i >= primes.length(); i++){
			primes[1] = true;
		}
	
	/**
		Implements the Sieve of Eratosthenes algorithm
		*/
		public void processSieve(){

		int i = 1;
		

		    for (int x = 2; x <= Math.sqrt(upper); x++)
			{
			i++;
			if (x % i == 0) {
			primes[x] = false;
			}
			    if (primes[x] = true)
				{
				    for (int y = x + 1; y <= Math.sqrt(upper); y++)
					{

					    if (y % x == 0) 
						{
						    primes[y] = false;
						}
					}
				}
			}

		
		}
	
	/**
		Shows the set of sexy pairs
		*/
	public void showPrimes(){
		//TODO: WRITE ME
	}
	
	/**
		gets lower and upper boundaries
		*/
	public void getBoundaries(){
		// TODO: write me
	}
}
