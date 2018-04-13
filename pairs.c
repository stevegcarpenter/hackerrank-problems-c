// https://www.hackerrank.com/challenges/pairs/problem
#include <stdio.h>
#include <stdlib.h>

static int compar(const void *_a, const void *_b)
{
    int *a = (int *) _a;
    int *b = (int *) _b;

    if (*a < *b)
        return -1;
    else if (*a > *b)
        return 1;
    else return 0;
}

static int pairs(int N, int *ar, int K)
{
    int key;
    int count = 0;

    // First, make sure the array is sorted
    qsort(ar, N, sizeof(int), &compar);

    for (int i = 0; i < N; i++) {
        key = ar[i] + K;
        if (bsearch(&key, ar, N, sizeof(int), &compar))
            count++;
    }

    return count;
}

int main(void)
{
    int N, K;

    scanf("%d %d", &N, &K);

    int ar[N];

    for (int i = 0; i < N; i++) {
        scanf("%d", &ar[i]);
    }

    printf("%d\n", pairs(N, ar, K));

    return 0;
}

