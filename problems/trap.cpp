// https://leetcode.com/problems/trapping-rain-water/
#include <vector>
using std::vector;    


int trap(vector<int>& height) {
    int i = 0;
    int j = height.size() - 1;

    int si = i + 1;
    int lj = j - 1;

    int water = 0;
    while (si <= lj ) {
        
        int m = height[i] < height[j] ? i : j;

        if (m == i) {
            if (height[si] <= height[i]) {
                water += height[i] - height[si];
                si++;
            } else {
                i = si;
            }
        } else {
            if (height[lj] <= height[j]) {
                water += height[j] - height[lj];
                lj--;
            } else {
                j = lj;
            }
        }
        
    }

    return water;
}