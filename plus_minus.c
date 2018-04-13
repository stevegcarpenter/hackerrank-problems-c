// https://www.hackerrank.com/challenges/plus-minus
#include <stdio.h>

int main(void)
{
    int N;
    int n[3] = { 0 };
    int val;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &val);

        if (val > 0)
            n[0]++;
        else if (val < 0)
            n[1]++;
        else
            n[2]++;
    }

    printf("%.3f\n%.3f\n%.3f\n", (float)n[0]/N, (float)n[1]/N, (float)n[2]/N);

    return 0;
}
