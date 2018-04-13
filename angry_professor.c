// https://www.hackerrank.com/challenges/angry-professor/problem
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int main()
{
    int ntests;
    int nstudents;
    int k; // number of students that must be late for class to be cancelled
    int t; // arrival time


    // input number of test cases
    scanf("%d", &ntests);
    assert(ntests > 0 && ntests <= 10);

    for (int j = 0; j < ntests; j++) {
        // input number of students
        scanf("%d %d", &nstudents, &k);
        assert(nstudents > 0 && nstudents <= 1000);
        assert(k > 0 && k <= nstudents);

        int present = 0;

        // store arrival times
        for (int i = 0; i < nstudents; i++) {

            // get student arrival time
            scanf("%d", &t);

            if (t <= 0)
                present += 1;
        }

        printf("%s\n", present < k ? "YES" : "NO");
    }

    return 0;
}
