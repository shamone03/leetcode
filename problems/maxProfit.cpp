#include <vector>
#include <limits>

int maxProfit(std::vector<int> &prices) {
    int profit = 0;
    int minPrice = INT_MAX;
    for (int i = 0; i < prices.size(); i++) {
        if (minPrice > prices[i]) {
            minPrice = prices[i];
        } else if (profit < prices[i] - minPrice) {
            profit = prices[i] - minPrice;
        }
    }

    return profit;
}