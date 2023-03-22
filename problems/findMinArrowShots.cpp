#include <vector>
#include <algorithm>
#include <iostream>
// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/

int compareInt(std::vector<int> x, std::vector<int> y) {
    return x[1] < y[1];
}
int findMinArrowShots(std::vector<std::vector<int>>& points) {
    int count = 1;

    std::sort(points.begin(), points.end(), compareInt);

    for (int i = 0; i < points.size(); i++) {
        std::cout << "[" << points[i][0] << ", " << points[i][1] << "]" << std::endl;
    }

    int lastEnd = points[0][1];
    for (int i = 0; i < points.size(); i++) {
        if (points[i][0] > lastEnd) {
            count++;
            lastEnd = points[i][1];
        }

    }


    return count;
}