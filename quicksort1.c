// https://www.hackerrank.com/challenges/quicksort1/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

void partition(int ar_size, int * ar)
{
    int ar2[ar_size];
    int p = ar[0];
    int j = 0;
    int k = ar_size - 1;

    for (int i = 1; i < ar_size; i++) {
        if (ar[i] < p) {
            printf("%d ", ar[i]);
            ar2[j++] = ar[i];
        }
        else
            ar2[k--] = ar[i];
    }

    // insert p
    ar2[j] = p;

    for (; j < ar_size; j++) {
        printf("%d ", ar2[j]);
    }
    printf("\n");
}

int main(void)
{

    int _ar_size;
    scanf("%d", &_ar_size);
    int _ar[_ar_size], _ar_i;
    for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) {
        scanf("%d", &_ar[_ar_i]);
    }

    partition(_ar_size, _ar);

    return 0;
}
