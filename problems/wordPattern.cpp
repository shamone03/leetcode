#include <string>
#include <cstring>
#include <iostream>
#include <map>

bool wordPattern(std::string pattern, std::string s) {
    char* tokens = strtok(const_cast<char*>(s.c_str()), " ");
    int sLen = 0;
    char* patternMap[255] = {0};

    
    for (int i = 0; i < pattern.length(); i++) {
        if (tokens == NULL) {
            return false;
        }
        if (patternMap[pattern[i]] == NULL) {
            for (int j = 0; j < 255; j++) {
                if (patternMap[j] != NULL && strcmp(patternMap[j], tokens) == 0) {
                    return false;
                }
            }
            patternMap[pattern[i]] = tokens;

        } else {
            if (strcmp(patternMap[pattern[i]], tokens) != 0) {
                return false;
            }
        }
        tokens = strtok(NULL, " ");
        sLen++;
        
    }
    while (tokens != NULL) {
        tokens = strtok(NULL, " ");
        sLen++;
        
    }

    return sLen == pattern.length();

}