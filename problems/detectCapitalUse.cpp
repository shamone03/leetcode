#include <string>

bool detectCapitalUse(std::string word) {
    if (word.length() == 1) {
        return (word[0] >= 65 && word[0] <= 90) || (word[0] >= 97 && word[0] <= 122);
    }
    
    int caps = 0;
    int small = 0;
    for (int i = 0; i < word.length(); i++) {
        if (word[i] >= 65 && word[i] <= 90) caps++;
        if (word[i] >= 97 && word[i] <= 122) small++;
    }

    return (word[0] >= 65 && word[0] <= 90 && caps == 1) || caps == word.length() || small == word.length();

}
