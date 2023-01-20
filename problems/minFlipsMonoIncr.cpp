#include <string>
#include <iostream>

int minFlipsMonoIncrSlow(std::string s) {
    int leftOnes = 0;
    int rightZeroes = 0;
    int flips = 999999;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            rightZeroes++;
        }
    }

    for (int i = 0; i < s.length(); i++) {
        if (flips > (leftOnes + rightZeroes)) {
            flips = leftOnes + rightZeroes;
        }
        rightZeroes = 0;
        if (s[i] == '1') {
            leftOnes++;
        }

        for (int j = i + 1; j < s.length(); j++) {
            if (s[j] == '0') {
                rightZeroes++;
            }
        }
    }
    if (flips > (leftOnes + rightZeroes)) {
        flips = leftOnes + rightZeroes;
    }

    return flips;
}

int minFlipsMonoIncr(std::string s) {
    int leftOnes = 0;
    int rightZeroes = 0;
    int flips = 999999;
    int* left = new int[s.length() + 1];
    int* right = new int[s.length() + 1];
    for (int i = 0; i < (s.length() + 1); i++) {
        left[i] = 0;
        right[i] = 0;
    }

    for (int i = 1; i <= s.length(); i++) {
        if (s[i - 1] == '1') {
            left[i] = ++leftOnes;
        } else {
            left[i] = leftOnes;
        }
    }
    left[s.length()] = leftOnes;
    right[s.length()] = 0;
    for (int i = (s.length()); i > 0; i--) {
        if (s[i - 1] == '0') {
            right[i - 1] = ++rightZeroes;
        } else {
            right[i - 1] = rightZeroes;
        }
    }

    for (int i = 0; i < (s.length() + 1); i++) {
        if (flips > (right[i] + left[i])) {
            flips = right[i] + left[i];
        }
    }

    return flips;
    // for (int i = 0; i < s.length(); i++) {

    //     if (flips > (leftOnes + rightZeroes)) {
    //         flips = leftOnes + rightZeroes;
    //     }
    //     rightZeroes = 0;
    //     if (s[i] == '1') {
    //         leftOnes++;
    //     }

    //     for (int j = i + 1; j < s.length(); j++) {
    //         if (s[j] == '0') {
    //             rightZeroes++;
    //         }
    //     }
    // }
    // if (flips > (leftOnes + rightZeroes)) {
    //     flips = leftOnes + rightZeroes;
    // }

    // return flips;
}