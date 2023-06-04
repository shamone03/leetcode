// https://leetcode.com/problems/optimal-partition-of-string/?envType=study-plan-v2&envId=amazon-spring-23-high-frequency
#include <string>
#include <unordered_set>

using std::string, std::unordered_set;

int partitionString(string s) {
    int partitions = 0;
    unordered_set<char> set;
    for (int i = 0; i < s.size(); i++) {
        if (!set.insert(s[i]).second) {
            partitions++;
            i--;
            set.clear();
        }
    }

    return ++partitions;
}