// https://www.hackerrank.com/challenges/flipping-bits/problem
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int T;
    uint32_t val;

    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &val);
        printf("%u\n", ~val);
    }

    return 0;
}

