#include <string>

bool isSubsequence(std::string s, std::string t) {
    // int sIndex = 0;
    int sIndex(0);
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == s[sIndex]) {
            sIndex++;
        } 
    }
    return sIndex == s.size();
}