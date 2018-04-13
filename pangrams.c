// https://www.hackerrank.com/challenges/pangrams/problem
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int l[26] = { 0 };
    int ch;

    while (EOF != (ch = getc(stdin))) {
        if (ch >= 'a' && ch <= 'z') {
            l[ch - 'a']++;
        } else if (ch >= 'A' && ch <= 'Z') {
            l[ch - 'A']++;
        }
    }

    bool all_letters = true;
    for (int i = 0; i < 26; i++) {
        if (!l[i]) {
            all_letters = false;
            break;
        }
    }

    if (all_letters) puts("pangram");
    else puts("not pangram");

    return 0;
}
