#include <random>
#include <vector>
#include <iostream>

int randomizedSelect(std::vector<int> A, int i, int n) {
    if (n == 0) {
        return A[0];
    }
    std::random_device device;
    std::uniform_int_distribution<int> distribution(0, A.size() - 1);
    int p =  distribution(device);

     

    return 0;

}