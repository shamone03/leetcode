// https://leetcode.com/problems/can-place-flowers/description/?envType=study-plan-v2&id=leetcode-75

#include <vector>
using std::vector;

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    if (flowerbed.size() == 1) {
        if (flowerbed[0] == 0) {
            n--;
            return n <= 0;
        }
    }
    
    if (flowerbed[0] == 0 && flowerbed[1] == 0) n--;
    flowerbed[0] = 1;
    int i = 1;
    while (i < flowerbed.size() && n >= 0) {
        if (flowerbed[i] == 0) {
            
            if ((i + 1) == flowerbed.size()) {
                if (flowerbed[i - 1] == 0) {
                    n--;
                    i++;
                    break;
                }
            }

            if (flowerbed[i - 1] == 0 && flowerbed[i + 1] == 0) {
                flowerbed[i] = 1;
                n--;
                i += 2;
            } else {
                i++;
            }
        } else {
            i += 2;
        }
    }

    return n <= 0;
}