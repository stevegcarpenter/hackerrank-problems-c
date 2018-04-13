// https://www.hackerrank.com/challenges/maximizing-xor/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int maxXor = 0;

    for (;l < r; l++) {
        for (int i = l + 1; i <= r; i++) {
            if ((l ^ i) > maxXor)
                maxXor = l ^ i;
        }
    }

    return maxXor;
}

int main()
{
    int res;
    int _l;
    scanf("%d", &_l);

    int _r;
    scanf("%d", &_r);

    res = maxXor(_l, _r);
    printf("%d\n", res);

    return 0;
}
