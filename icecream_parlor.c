// https://www.hackerrank.com/challenges/icecream-parlor/problem
#include <stdio.h>
#include <sys/time.h>
#include <stdlib.h>

struct flavors_st {
    int f1;
    int f2;
};

void icecream_parlor1(int N, int *ar, int M, struct flavors_st *fl)
{
    for (int i = 0; i < N; i++) {
        int v = M - ar[i];
        for (int j = i + 1; j < N; j++) {
            if (ar[j] == v) {
                fl->f1 = i;
                fl->f2 = j;
                return;
            }
        }
    }
}

int main(void)
{
    int T;    // # test cases
    int M;    // # dollars
    int N;    // # flavors
    struct timeval start, end, dif;
    struct flavors_st flavors;

    scanf("%d", &T);

    while (T--) {

        scanf("%d %d", &M, &N);

        int ar[N];

        for (int i = 0; i < N; i++) {
            scanf("%d", &ar[i]);
        }

        timerclear(&start);
        timerclear(&end);
        timerclear(&dif);

        gettimeofday(&start, NULL);

        icecream_parlor1(N, ar, M, &flavors);

        gettimeofday(&end, NULL);
        timersub(&end, &start, &dif);

        printf("Results: %ld usec, i1=%d, i2=%d\n",
                dif.tv_usec, flavors.f1 + 1, flavors.f2 + 1);

    }

    return 0;
}

