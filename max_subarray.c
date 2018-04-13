// https://www.hackerrank.com/challenges/maxsubarray/problem
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

typedef struct maxsub_st {
    int sum;
    int csum;
    int l;
    int r;
} maxsub_t;

maxsub_t *max_sub(int *a, int sz)
{
    maxsub_t cur_max;
    maxsub_t max;
    int max_nonc_sum = -1 * INT_MAX;


    cur_max.csum = -1 * INT_MAX;
    max = cur_max;

    for (int i = 0; i < sz; i++) {
        if (cur_max.csum < 0) {
            cur_max.csum = a[i];
            cur_max.l = i;
            cur_max.r = i;
        } else {
            cur_max.csum += a[i];
            cur_max.r = i;
        }

        if (cur_max.csum > max.csum) {
            max = cur_max;
        }

        if (a[i] > 0) {
            if (max_nonc_sum < 0) {
                max_nonc_sum = a[i];
            }
            else {
                max_nonc_sum += a[i];
            }
        }
    }

    if (max_nonc_sum < 0) {
        max.sum = max.csum;
    } else {
        max.sum = max_nonc_sum;
    }

    maxsub_t *ans = calloc(1, sizeof(maxsub_t));
    *ans = max;

    return ans;
}

int main()
{
    int t;
    int n;

    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        maxsub_t *max = max_sub(arr, n);

        printf("%d %d\n", max->csum, max->sum);

        free(max);
    }

    return 0;
}

