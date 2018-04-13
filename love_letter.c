// https://www.hackerrank.com/challenges/the-love-letter-mystery/problem
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[10000];
    int t;
    int l, r, c;

    // get number of test cases
    scanf("%d", &t);

    while (t--) {
        scanf("%s", arr);
        r = strlen(arr) - 1;
        l = 0;
        c = 0;

        while (l < r) {
            c += abs(arr[l++] - arr[r--]);
        }
        printf("%d\n", c);
    }

    return 0;
}

