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
    getBoundaries();
    processSieve();
    showPrimes();
}

void getBoundaries() {
    printf("Enter the lower bound: ");
    scanf("%d", &b.lowBound);
    printf("Enter the upper bound: ");
    scanf("%d", &b.highBound);
    
    if (boundSizeCheck(b.lowBound) || boundSizeCheck(b.highBound)){
        printf("Please enter the boundaries again.\n");
        getBoundaries();
    }
}


//Make sure input is of reasonable size
int boundSizeCheck(int bound) {
    if (bound > 50000 || bound < 1){
        printf("Inputs must be below 50000 and above 0.\n");
        return -1;
    }
    else return 0;
}

void showPrimes(){
    int i;
    for (i = b.lowBound; i < b.highBound; i++) {
        if (i + 6 < b.highBound)
            if (primes[i] && primes[i + 6])
                printf("%d %d\n", primes[i], primes[i + 6]);
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
