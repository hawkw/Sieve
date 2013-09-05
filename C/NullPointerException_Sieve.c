#include <stdio.h>
typedef struct Bounds Bounds;

//should move function declarations to a .h file
void processSieve();
int boundSizeCheck(int endpoint);

struct Bounds {
    int lowBound;
    int highBound;
};

Bounds b = {0,0};

void getBoundaries() {
    printf("Enter the lower bound: ");
    scanf("%d", &b.lowBound);
    printf("Enter he upper bound: ");
    scanf("%d", &b.highBound);
    
    if (boundSizeCheck(b.lowBound)) || (boundSizeCheck(b.highBound)){
        printf("Please enter the boundaries again.")
        getBoundaries();
    }
}


//Make sure input is of reasonable size
int boundSizeCheck(int bound) {
    if (bound > 50000 || bound < 1){
        printf("Inputs must be below 50000 and above 0.\n");
        return 1;
    }
    else return 0;
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
