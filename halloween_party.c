// https://www.hackerrank.com/challenges/halloween-party/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int T; // num tests
    int K; // num cuts
    long int rows;
    long int cols;

    // get number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &K);

        rows = K / 2;
        cols = rows + K % 2;

        printf("%ld", rows * cols);
    }

    return 0;
}

