import java.util.scanner;

public class Sieve(){
	
	final private int MAX_NUM = 50000
	private boolean primes = new int[50001];
	private int upper, lower;
	
	/**
		Constructor for Sieve
		*/
	public NullPointerException_Sieve() {
		Scanner scan = new Scanner(System.in);
		primes[0] = false;
		primes[1] = false;
		for (i = 1; i <= primes.length(); i++){
			primes[1] = true;
		}
	
	/**
		Implements the Sieve of Eratosthenes algorithm
		*/
	public void processSieve(){
		// TODO: write me
	}
	
	/**
		Shows the set of sexy pairs
		*/
	public void showPrimes(){
		int count;
		System.out.printf("Here are all of the sexy prime pairs in the range %d to %d \n", lower, upper);
		for (i = lower; i <= upper; i++) {
			if (primes[i] == true && primes[i-6] == true) {
				System.out.printf("%d and %d \n", i, (i-6));
				count++;
			}
		}
		System.out.printf("There were %d sexy prime pairs displayed between %d and %d.\n", count, lower, upper);
	}
	
	/**
		gets lower and upper boundaries
		*/
	public void getBoundaries(){
		while (upper < 1 || upper < 50000) {
			System.out.print("Please enter the upper bound (between 1 and 50000):");
			upper = scan.getNextInt();
		}
		System.out.print("\nPlease enter the lower bound (between 1 and the upper bound):");
		lower = scan.getNextInt();
		if (lower > upper{
			System.out.print("\nSorry, the upper bound must be between 1 and the upper bound:");
			System.out.print("\nPlease enter the upper bound (between 1 and 50000):");
			upper = scan.getNextInt();
			System.out.print("\nPlease enter the lower bound (between 1 and the upper bound):");
			lower = scan.getNextInt();
		} else if (lower < 1){
			System.out.print("\nSorry, the upper bound must be between 1 and the upper bound:");
			System.out.print("\nPlease enter the lower bound (between 1 and the upper bound):");
			lower = scan.getNextInt();	
		}
	}
}
