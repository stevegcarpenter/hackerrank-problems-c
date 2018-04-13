// https://www.hackerrank.com/challenges/find-digits/problem
#include <stdio.h>
#include <stdlib.h>

int find_digits(int val)
{
    int digit;
    int _val = val;
    int count = 0;

    while (_val) {
        digit = _val % 10;
        _val /= 10;

        if (digit == 0) continue;

        if (val % digit == 0)
            count++;
    }

    return count;
}

int main()
{
    int ntests;
    int val;
    int ans;

    scanf("%d", &ntests);

    for (int i = 0; i < ntests; i++) {
        scanf("%d", &val);

        ans = find_digits(val);
        printf("%d\n", ans);
    }

    return 0;
}
