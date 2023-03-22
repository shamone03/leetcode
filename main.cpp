#include <iostream>
#include <vector>
#include <string>
#include "problems/runningSum.cpp"
#include "problems/fibonacci.cpp"
#include "datastructs/printVector.cpp"
// #include "problems/isPalindrome.cpp"

int main() {
    // lengthOfLongestSubstring("bbbbb");
    std::string s = "cdcd";

    // for (int i = 0; i < s.size(); i++) {
    //     s[i] = tolower(s[i]);
    // }
    std::cout << fibonacci(500) << std::endl;
    // std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // printVector(runningSum(v));
    // std::cout << runningSum(v) << std::endl;

    
    // std::map<char, int> m;
    // std::cout << m.insert({'a', 0}).first->second << std::endl;
    // std::cout << m.insert({'a', 1}).first->second << std::endl;
    
    // std::cout << lengthOfLongestSubstring("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vestibulum sit amet leo magna. Praesent pretium tellus a sem tristique, eget tincidunt mi consectetur. Morbi vel consectetur magna, sit amet dignissim diam. Etiam euismod, felis rhoncus fringilla dapibus, lectus elit convallis nisl, vel pretium dui justo ac lectus. Fusce convallis finibus risus, et consequat mi dictum eu. Mauris lobortis condimentum accumsan. Nam faucibus sed ipsum vitae sodales") << std::endl;
    return 0;
}