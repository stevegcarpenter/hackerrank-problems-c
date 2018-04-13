// https://www.hackerrank.com/challenges/diagonal-difference/problem
#include <stdio.h>

void diagonal_difference(int N, int A[][N])
{
    int i;
    int s1 = 0;
    int s2 = 0;

    for (i = 0; i < N; i++) {
        s1 += A[i][i];
        s2 += A[N-i-1][i];
    }

    printf("%d\n", s1-s2 < 0 ? -(s1-s2) : s1-s2);
}

int main(void)
{
    int N;

    scanf("%d", &N);

    int A[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    diagonal_difference(N, A);

    return 0;
}
