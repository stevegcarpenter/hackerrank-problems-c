// https://www.hackerrank.com/challenges/sherlock-and-squares/problem
#include <stdio.h>
#include <math.h>

int main()
{
    int T;
    int A, B;

    scanf("%d", &T);

    while (T--) {
        scanf("%d %d", &A, &B);

        int count = 0;
        for (int i = sqrt(A); i*i <= B; i++) {
            if (i*i >= A && i*i <= B)
                count++;
        }

        printf("%d\n", count);
    }

    return 0;
}
