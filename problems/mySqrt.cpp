int mySqrt(int x) {
    if (x < 2) return x;
    for (long i = 0; i <= x; i++) {
        if ((i * i) > x) {
            return i - 1;
        }
        if ((i * i) == x) {
            return i;
        }
    }
    return 0;
}