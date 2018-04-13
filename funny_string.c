// https://www.hackerrank.com/challenges/funny-string/problem

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int T;
    char a[10000];

    scanf("%d", &T);

    while (T--) {
        bool funny = true;

        // get string
        scanf("%s", a);

        // find length of string
        int len = strlen(a);

        for (int i = 1; i < len; i++) {
            if (abs(a[i] - a[i-1]) !=
                    abs(a[len-1-i] - a[len-i])) {
                funny = false;
                break;
            }
        }

        if (funny) puts("Funny");
        else puts("Not Funny");
    }

    return 0;
}
