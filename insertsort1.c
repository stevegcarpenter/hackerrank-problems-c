// https://www.hackerrank.com/challenges/insertionsort1/problem
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

void insertsort1(int *arr, int sz)
{
    assert(arr);

    // extract element to insert
    int val = arr[sz - 1];

    for (int i = sz - 1; i >= 0; i--) {
        if (i != 0 && val < arr[i - 1]) {
            arr[i] = arr[i - 1];
            p_arr(arr, sz);
        } else {
            // insert value
            arr[i] = val;
            p_arr(arr, sz);
            break;
        }
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

    // insert last element in array while keeping sorted
    insertsort1(arr, sz);

    return 0;
}
