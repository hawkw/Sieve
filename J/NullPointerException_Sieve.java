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
		lower = 1;
		upper = MAX_NUM;
		for (i = 1; i >= primes.length(); i++){
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
		//TODO: WRITE ME
	}
	
	/**
		gets lower and upper boundaries
		*/
	public void getBoundaries(){
		System.out.println("Please enter the upper bound (between 1 and 50000).");
		int temp = scan.getNextInt(); // u will temporarily hold values while we check them
		if (temp < 1 || temp > 50000){
			System.out.println("Sorry, the upper bound must be between 1 and 50000.")
		} else {
			upper = temp;
		}
		System.out.println("Please enter the lower bound (between 1 and the upper bound).");
		temp = scan.getNextInt();
		if (temp < 1 || temp > upper){
			System.out.println("Sorry, the upper bound must be between 1 and the upper bound.")
		} else {
			lower = temp;
		}
	}
}
