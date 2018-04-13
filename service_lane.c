// https://www.hackerrank.com/challenges/service-lane/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>

/* Constraints

   2≤N≤100000
   1≤T≤1000
   0≤i<j<N
   2≤j−i+1≤min(N,1000)
   1≤width[k]≤3,where 0≤k<N

 */

int max_svc_ln(int *width, int i, int j)
{
    int v = 3;

    for (; i <= j; i++) {
        if (width[i] < v) {
            v = width[i];
            if (v == 1)
                return v;
        }
    }

    return v;
}

int main()
{
    int N;
    int T;
    int i;
    int j;
    int *width;
    int v;

    scanf("%d %d", &N, &T);
    assert(N >= 2 && N <= 100000);
    assert(T>=1 && T<=1000);

    width = malloc(N * sizeof(int));
    assert(width);

    // read in width array
    for (int c = 0; c < N; c++) {
        scanf("%d", &width[c]);
    }

    for (int c = 0; c < T; c++) {
        scanf("%d %d", &i, &j);
        assert(i>=0 && i<j);
        assert(j<N);
        v = max_svc_ln(width, i, j);
        printf("%d\n", v);
    }

    return 0;
}

