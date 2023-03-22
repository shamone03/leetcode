#include <string>
// https://leetcode.com/problems/length-of-last-word/

int lengthOfLastWord(std::string s) {
    int n = 0;
    int i = s.size() - 1;
    while (s[i] == ' ') i--;
    while (i >= 0 && s[i--] != ' ') n++;
    return n;
}