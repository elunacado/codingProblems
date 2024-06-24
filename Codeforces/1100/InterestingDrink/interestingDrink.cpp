//https://codeforces.com/problemset/problem/706/B
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const std::vector<int>& vec, int target) {
    int left = 0;
    int right = vec.size() - 1;
    int mid = 0;

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (vec[mid] == target) {
            // Find the rightmost occurrence of target
            while (mid + 1 < vec.size() && vec[mid + 1] == target) {
                mid++;
            }
            return mid + 1;
        } else if (vec[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return left;
}

int main(){
    int numberOfStores = 0;
    int storePrice = 0;
    std::vector<int> storePrices;
    int numberOfDays = 0;
    int coinValue = 0;

    cin >> numberOfStores;    

    for (size_t i = 0; i < numberOfStores; i++){
        cin >> storePrice;
        storePrices.push_back(storePrice);
    }

    sort(storePrices.begin(), storePrices.end());

    cin >> numberOfDays;

    for (size_t i = 0; i < numberOfDays; i++) {
        cin >> coinValue;
        int pos = binarySearch(storePrices, coinValue);
        cout << pos << "\n";
    }

    return 0;
}
