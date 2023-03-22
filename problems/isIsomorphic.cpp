#include <string>
// https://leetcode.com/problems/isomorphic-strings/

bool isIsomorphic(std::string s, std::string t) {
    
    int x[255] = {};
    int y[255] = {};
    for (int i = 0; i < s.length(); i++) {
        if (x[s[i]] == 0) {
            x[s[i]] = t[i];
        }
        if (y[t[i]] == 0) {
            y[t[i]] = s[i];
        }
        if (x[s[i]] != t[i]) {
            return false;
        }
        if (y[t[i]] != s[i]) {
            return false;
        }
    }
    return true;
}