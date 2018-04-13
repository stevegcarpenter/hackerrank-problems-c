// https://www.hackerrank.com/challenges/staircase/problem
#include <stdio.h>

void print_staircase(int N)
{
    int spaces;
    int stairs;

    for (int row = 1; row <= N; row++) {
        spaces = N - row;
        while (spaces--) {
            printf(" ");
        }

        stairs = row;
        while (stairs--) {
            printf("#");
        }
        printf("\n");
    }
}

int main(void)
{
    int N;

    scanf("%d", &N);

    print_staircase(N);

    return 0;
}
