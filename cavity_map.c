// https://www.hackerrank.com/challenges/cavity-map/problem
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    char map[n][n + 1];

    // fill map
    for (int i = 0; i < n; i++) {
        scanf("%s", map[i]);
    }

    // process map
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (map[i][j] != 'X' &&
                    map[i][j] > map[i-1][j] &&
                    map[i][j] > map[i][j-1] &&
                    map[i][j] > map[i+1][j] &&
                    map[i][j] > map[i][j+1])
                map[i][j] = 'X';
        }
    }

    // print map
    for (int i = 0; i < n; i++) {
        printf("%s\n", map[i]);
    }

    return 0;
}

