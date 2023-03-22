#include <string>
#include <iostream>
// https://leetcode.com/problems/find-the-index-of-the-first-occurrence-in-a-string/

int strStr(std::string haystack, std::string needle) {
    int j = 0;
    for (int i = 0; i < haystack.size(); i++) {
        if (haystack[i] == needle[j]) {
            j++;
        } else {
            i -= j;
            j = 0;
        }
        if (j == needle.size()) {
            return i - j + 1;
        }
    }

    return -1;
}