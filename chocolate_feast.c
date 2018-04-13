// https://www.hackerrank.com/challenges/chocolate-feast/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int calc_bars(int dollars, int cost, int wrappers)
{
    int nbars = dollars / cost;
    int nwrappers = nbars; // wrapper count

    while (nwrappers >= wrappers) {
        nwrappers = nwrappers - wrappers + 1;
        nbars++;
    }

    return nbars;
}

int main() {

    int t, n, c, m;
    scanf("%d", &t);
    while ( t-- ) {
        scanf("%d%d%d",&n,&c,&m);
        int answer = 0;

        answer = calc_bars(n, c, m);

        printf("%d\n",answer);
    }
    return 0;
}
