// https://leetcode.com/problems/the-kth-factor-of-n/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency

int kthFactorSlow(int n, int k) {
    int j = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) j++;
        if (j == k) return i;
    }
    return -1;
}