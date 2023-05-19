// https://leetcode.com/problems/powx-n/

double myPow(double x, int n) {
    if (x == 1) {
        return x;
    }

    long double prod = 1;
    long exp = n < 0 ? -1 * n : n;
    // if (n % 2 == 0) {
    //     if (n < 0) {

    //         unsigned i = *(unsigned*) &x;
    //         i >>= exp - 1;
    //         return (x >> (exp - 1));
    //     }
    //     if (n > 0) {

    //         unsigned i = *(unsigned*) &x;
    //         i <<= exp - 1;
    //         return (x << (exp - 1));
    //     }
    // }
    for (long i = 0; i < exp; i++) {
        prod *= x;
    }

    if (n < 0) {
        return 1 / prod;
    }

    return prod;
}