// https://www.hackerrank.com/challenges/cut-the-sticks/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>

int main()
{
    int nsticks;
    int smallest = 1000;
    int cutsz;
    int ncuts;

    scanf("%d", &nsticks);

    int arr[nsticks];

    for (int i = 0; i < nsticks; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < smallest)
            smallest = arr[i];
    }

    do {
        cutsz = smallest;
        smallest = 1000;
        ncuts = 0;
        for (int i = 0; i < nsticks; i++) {
            if (arr[i] <= 0)
                continue;

            // cut
            arr[i] -= cutsz;
            ncuts++;

            // conditionally update smallest
            if (arr[i] > 0 && arr[i] < smallest)
                smallest = arr[i];
        }

        // print ncuts
        if (ncuts > 0)
            printf("%d\n", ncuts);

    } while (ncuts); // continue while cuts were made

    return 0;
}
