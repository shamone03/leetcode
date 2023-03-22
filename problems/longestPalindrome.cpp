#include <string>
#include <iostream>
#include "isPalindrome.cpp"

std::string longestPalindrome(std::string s) {
    if (s.size() == 1 || isPalindrome(s)) return s;
    if (s.size() == 2) return (s[0] == s[1]) ? s : s.substr(0, 1);
    
    std::string** memo = new std::string*[s.size()];
    std::string longest;

    for (int i = 0; i < s.size(); i++) {
        for (int j = i; j < s.size(); j++) {
            std::string substr = s.substr(i, j - i + 1);
            if (isPalindrome(substr)) {           
                if (substr.size() > longest.size()) {
                    longest = substr;
                }
            }
        }
    }

    return longest;
}

