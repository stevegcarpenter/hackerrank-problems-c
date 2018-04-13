// https://www.hackerrank.com/challenges/angry-children/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#define MAX 100000
#define MAX_VAL 1000000001

int list[MAX];

int compare_val(const void *a, const void *b)
{
    int *_a = (int *)a;
    int *_b = (int *)b;

    if (*_a < *_b)
        return -1;
    else if (*_a > *_b)
        return 1;
    else
        return 0;

}

int main()
{
    int N, K;
    int i;

    scanf("%d %d",&N, &K);
    for(i = 0; i < N; i++)
        scanf("%d", &list[i]);

    qsort(list, N, sizeof(int), &compare_val);

    int unfairness = list[K-1] - list[0];
    for (i = K-1; i < N; i++) {
        if (list[i] - list[i-K+1] < unfairness)
            unfairness = list[i] - list[i-K+1];
    }

    printf("%d\n",unfairness);

    return 0;
}

