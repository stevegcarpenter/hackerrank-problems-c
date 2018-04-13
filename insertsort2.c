// https://www.hackerrank.com/challenges/insertionsort2/problem
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

void p_arr(int *arr, int sz)
{
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertsort(int *arr, int sz)
{
    assert(arr);

    for (int i = 1; i < sz; i++) {
        int j = i;
        while (j > 0 && arr[j-1] > arr[j]) {
            // swap variables
            int tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j -= 1;
        }
        p_arr(arr, sz);
    }
}

int main()
{
    int sz;
    int *arr;

    scanf("%d", &sz);

    arr = malloc(sz * sizeof(int));
    assert(arr);

    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]);
    }

    // sort array
    insertsort(arr, sz);

    return 0;
}
