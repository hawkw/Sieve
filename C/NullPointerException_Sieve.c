#include <stdio.h>
typedef struct Bounds Bounds;

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
