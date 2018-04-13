// https://www.hackerrank.com/challenges/acm-icpc-team/problem
#include <stdio.h>

int acm_icpc(char *p1, char *p2, int len)
{
    int ntopics = 0;

    for (int i = 0; i < len; i++) {
        if (p1[i] == '1' || p2[i] == '1')
            ntopics++;
    }

    return ntopics;
}

int main()
{
    int N, M;

    scanf("%d %d", &N, &M);

    char skills[N][M];

    // input
    for (int i = 0; i < N; i++) {
        scanf("%s", skills[i]);
    }

    int mtopics = 0;
    int mteams = 0;
    int ntopics;
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            ntopics = acm_icpc(skills[i], skills[j], M);

            // reset num teams, update max
            if (ntopics > mtopics) {
                mtopics = ntopics;
                mteams = 1;
                printf("Updating: team (%d,%d) = %d skills\n",
                       i, j, ntopics);
            } else if (ntopics == mtopics) {
                mteams++;
                printf("Addtl team (%d,%d) found with %d "
                       "skills, teams %d\n",
                       i, j, ntopics, mteams);
            }
        }
    }

    printf("%d\n%d\n", mtopics, mteams);

    return 0;
}
