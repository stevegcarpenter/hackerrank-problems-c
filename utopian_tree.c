// https://www.hackerrank.com/challenges/utopian-tree/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

static void calculate_height(int c)
{
    long h = 1;
    int x;

    for (x = 0; x < c; x++) {
	if (x % 2) {
	    h += 1;
	    printf("c=%d, h=%ld, Adding 1\n", c, h);
	}
	else {
	    h *= 2;
	    printf("c=%d, h=%ld, Doubling\n", c, h);
	}
    }

    printf("%ld\n", h);
}

int main()
{
    int t;
    int c;
    
    scanf("%d", &t);
    
    for (;t > 0; t--) {
	scanf("%d", &c);
	calculate_height(c);
    }

    return 0;
}
