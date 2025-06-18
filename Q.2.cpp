#include <vector>
#include <algorithm>

void reverseArray(std::vector<int>& arr, int m) {
    std::reverse(arr.begin() + m + 1, arr.end());
}
