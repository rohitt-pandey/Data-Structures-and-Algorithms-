#include <iostream>
#include <vector>

using namespace std;

vector<int> twoPointer(const vector<int>& arr, int target) {
    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {
        int currentSum = arr[i] + arr[j];

        if (currentSum < target) {
            i++;
        } 
        else if (currentSum > target) {
            j--;
        } 
        else {
            return {i, j};
        }
    }
    return {};
}

int main() {
    vector<int> arr = {2, 7, 11, 15, 16};
    int target = 31;

    vector<int> indices = twoPointer(arr, target);

    if (!indices.empty()) {
        cout << " indices are :" << indices[0] << "," << indices[1] << endl;
    } else {
        cout << " indices are : not found" << endl;
    }

    return 0;
}