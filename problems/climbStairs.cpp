// https://leetcode.com/problems/climbing-stairs/

int helper(int n, int* memo) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (memo[n - 1] < 0) memo[n - 1] = helper(n - 1, memo);
    if (memo[n - 2] < 0) memo[n - 2] = helper(n - 2, memo);
    return memo[n - 1] + memo[n - 2];
}

int climbStairsDP(int n) {

    int* memo = new int[n];
    for (int i = 0; i < n; memo[i++] = -1);
    return helper(n, memo);
}

int climbStairs(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;

    int nMinus2 = 1;
    int nMinus1 = 2;
    for (int i = 3; i <= n; i++) {
        nMinus1 += nMinus2;
        nMinus2 = nMinus1 - nMinus2;
    }

    return nMinus1;
}
