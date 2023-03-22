#pragma once
#include <string>
// https://leetcode.com/problems/valid-palindrome/

bool isPalindrome(std::string s) {
    if (s.size() < 2) return true;
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        while (!isalnum(s[l]) && l < s.size()) l++;
        while (!isalnum(s[r]) && r > 0) r--;
        if (r < l) return true;
        if (tolower(s[l]) == tolower(s[r])) {
            l++;
            r--;
        } else {
            return false;
        }
    }
    return true;
}

bool isPalindromeRecursive(std::string s) {
    if (s.size() < 2) return true;
    s[0] = tolower(s[0]);
    s[s.size() - 1] = tolower(s[s.size() - 1]);
    while (s.size() > 0 && (s[0] < 97 || s[0] > 122) && !isalnum(s[0])) {
        s = s.substr(1, s.size() - 1);
        s[0] = tolower(s[0]);
    }
    while (s.size() > 0 && (s[s.size() - 1] < 97 || s[s.size() - 1] > 122) && !isalnum(s[s.size() - 1])) {
        s = s.substr(0, s.size() - 1);
        s[s.size() - 1] = tolower(s[s.size() - 1]);
    }
    if (s.size() == 0) return true;
    if (s[0] == s[s.size() - 1]) return isPalindrome(s.substr(1, s.size() - 2));

    return false;
}