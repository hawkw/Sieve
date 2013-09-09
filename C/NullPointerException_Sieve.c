#include <stdio.h>
#define ARRAYSIZE 50001
typedef struct Bounds Bounds;

void processSieve();
void getBoundaries();
int boundSizeCheck(int bound);
void showPrimes();

struct Bounds {
    int lowBound;
    int highBound;
};

int primes[ARRAYSIZE];
Bounds b = {0,0};

int main(){
	processSieve();
	showPrimes();
	getBoundaries();
	showPrimes();
}

void getBoundaries() {
    int temp;
    while(b.lowBound >= b.highBound) {
        //make everything invalid to start
        b.lowBound = -1;
        b.highBound = -1;
        
        while(b.lowBound < 1 || b.lowBound > 50000) {
            printf("Enter the lower boundary (between 1 and 50000): ");
            scanf("%d", &b.lowBound);
        }
        
        while(b.highBound < 1 || b.highBound > 50000) {
            printf("Enter he upper boundary (between 1 and 50000: ");
            scanf("%d", &b.highBound);
        }
        
        if (b.lowBound > b.highBound) {
            printf("Your upper boundary cannot be smaller than your lower boundary.\n");
        }
        else if(b.lowBound == b.highBound) {
            printf("Your upper boundary and lower boundary cannot be equal.\n");
        }
    }
}
        

void showPrimes(){
    int i;
    for (i = b.lowBound; i < b.highBound; i++) {
        if (i + 6 < b.highBound)
            if (primes[i] && primes[i + 6]){
                printf("%d %d\n", primes[i], primes[i + 6]);
                printf("%d and %d\n", primes[i], primes[i + 6]);
            }
    }

}

void processSieve() {
    //p is the current prime number being evaluated
    int p = 2;
    int i, j;
    //Populate our array with numbers
    for (i = 0; i < ARRAYSIZE; i++){
        primes[i] = i; 
    }
    primes[1] = 0;

    //iterate through every element
    for (i = p; p < ARRAYSIZE; i++){
        //if the element is prime, cross off its multiples
        if (primes[i]){
            for (j = i + p; j < ARRAYSIZE; j = j + p){
                primes[j] = 0;
            }
        }
        p++;
    }
}
