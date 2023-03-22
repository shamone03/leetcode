#include <iostream>
// https://leetcode.com/problems/n-th-tribonacci-number/

int helper(int n, int* memo) {
    if (memo[n] != -1) {
        return memo[n];
    }
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;

    memo[n - 3] = helper(n - 3, memo);
    memo[n - 2] = helper(n - 2, memo);
    memo[n - 1] = helper(n - 1, memo);
    return memo[n - 3] + memo[n - 2] + memo[n - 1];
}

int tribonacci(int n) {
    int* memo = new int[n + 1];
    for (int i = 0; i < (n + 1); memo[i++] = -1);
    return helper(n, memo);
}
