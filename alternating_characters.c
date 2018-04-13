// https://www.hackerrank.com/challenges/alternating-characters/problem
#include <stdio.h>

int main()
{
    int T;

    scanf("%d", &T);

    while (T--) {
        int a;
        int prev;
        long count = 0;

        // read in first char
        prev = getc(stdin);

        // get characters from input until EOF
        while ('\n' != (a = getc(stdin))
               EOF != a) {
            if (prev == a) {
                count++;
            } else {
                prev = a;
            }
        }

        printf("%ld\n", count);
    }

    return 0;
}
