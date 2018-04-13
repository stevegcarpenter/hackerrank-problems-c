// https://www.hackerrank.com/challenges/manasa-and-stones/problem
#include <stdio.h>

int main()
{
    int T, a, b, n, small, big;

    // n test cases
    scanf("%d", &T);

    while (T--) {

        scanf("%d %d %d", &n, &a, &b);

        if (a == b) {
            printf("%d\n", a * (n - 1));
            continue;
        }

        if (a > b) {
            small = b;
            big = a;
        } else {
            small = a;
            big = b;
        }

        for (int i = 0; i < n; i++) {
            printf("%d ", small * (n - 1 - i) + big * i);
        }
    }

    return 0;
}
