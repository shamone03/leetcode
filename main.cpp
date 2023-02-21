#include <iostream>
#include <vector>
#include <string>
#include "datastructs/ListNode.h"
#include "datastructs/printVector.cpp"
#include "problems/removeDuplicates.cpp"
#include "problems/removeElement.cpp"
#include "problems/searchInsert.cpp"
#include "problems/tribonacci.cpp"
#include "problems/lengthOfLastWord.cpp"
#include "problems/mySqrt.cpp"
#include "problems/lengthOfLongestSubstring.cpp"

int main() {
    // lengthOfLongestSubstring("bbbbb");


    // std::map<char, int> m;
    // std::cout << m.insert(std::pair<char, int>('a', 0)).first->second << std::endl;
    // std::cout << m.insert(std::pair<char, int>('a', 1)).first->second << std::endl;

    std::cout << lengthOfLongestSubstring("dvdf") << std::endl;
    return 0;
}