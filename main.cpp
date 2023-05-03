#include <iostream>
#include <vector>
#include <string>
#include "problems/runningSum.cpp"
#include "datastructs/printVector.cpp"
// #include "problems/isPalindrome.cpp"
#include "problems/strStr.cpp"
#include "problems/canPlaceFlowers.cpp"

int main() {
    std::vector<int> v{1,0,0,0,1,0,0};
    std::cout << canPlaceFlowers(v, 2) << std::endl;
    return 0;
}