// https://www.hackerrank.com/challenges/a-very-big-sum/problem
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int N;
    long long int sum = 0;
    int32_t val;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%d", &val);
        sum += val;
    }

    printf("%lld\n", sum);

    return 0;
}
