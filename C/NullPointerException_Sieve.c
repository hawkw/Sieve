#include <stdio.h>
typedef struct Bounds Bounds;

//should move function declarations to a .h file
void processSieve();

struct Bounds {
    int lowBound;
    int highBound;
};

Bounds b = {0,0};

void getBoundaries() {
    printf("The lower bound: ");
    scanf("%d", &b.lowBound);
    printf("The upper bound: ");
    scanf("%d", &b.highBound);
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
        //if the element isn't a non-prime, cross off its multiples
        if (primes[i]){
            for (j = i + p; j < ARRAYSIZE; j = j + p){
                primes[j] = 0;
            }
        }
        p++;
    }
}
