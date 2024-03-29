#include <map>
#include <string>
// https://leetcode.com/problems/longest-substring-without-repeating-characters/

int lengthOfLongestSubstring(std::string s) {
    int longest = 0;
    if (s.size() < 2) return s.size();
    
    std::map<char, int> m;
    
    for (int i = 0; i < s.length(); i++) {

        auto insertRes = m.insert(std::pair<char, int>(s[i], i));

        if (!insertRes.second) {
            longest = (m.size() > longest) ? m.size() : longest;
            i = insertRes.first->second + 1;
            m.clear();
            m.insert(std::pair<char, int>(s[i], i));
            
        }
    }

    return (m.size() > longest) ? m.size() : longest;

}