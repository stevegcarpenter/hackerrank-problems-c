// https://www.hackerrank.com/challenges/taum-and-bday/problem
#include <stdio.h>

int main()
{
    long long T, b, w, cb, cw, ccon;

    // num test cases
    scanf("%lld", &T);

    while (T--) {
        // get num black, num white
        scanf("%lld %lld", &b, &w);
        // get cost black, cost white, cost convert
        scanf("%lld %lld %lld", &cb, &cw, &ccon);

        long long price = 0;

        printf("\nwhite:        %lld\n"
               "cost white:   %lld\n"
               "black:        %lld\n"
               "cost black:   %lld\n"
               "cost convert: %lld\n",
               w, cw, b, cb, ccon);

        // if we need whites
        if (w) {
            // if white cost more then converting blacks
            if (cw > (ccon + cb)) {
                price = w * cb + w * ccon;
            printf("Buying %lld blacks to convert @ %lld"
                   " to whites: cost=%lld\n",
                   w, ccon, price);
            } else {
                // just buying whites is cheaper
                price = w * cw;
            printf("Buying %lld whites @ %lld: cost=%lld\n",
                   w, cw, price);
            }
        }

        // if we need blacks
        if (b) {
            // if blacks cost more then converting whites
            if (cb > (ccon + cw)) {
                price += (b * cw + b * ccon);
            printf("Buying %lld whites to convert @ %lld"
                   " to blacks: cost=%lld\n",
                   b, ccon, price);
            } else {
                // just buying blacks is cheaper
                price += b * cb;
            printf("Buying %lld blacks @ %lld: cost=%lld\n",
                   b, cw, price);

            }
        }

        printf("%lld\n", price);
    }

    return 0;
}
