#include <iostream>
#include <vector>

#include <climits>

using namespace std;
//#53 Maximum Subarray
//timeComplexity-O(n);
//spaceComplexity-O(1)



int maxSubArray( vector<int>& nums) {
    int maxSum = INT_MIN;
    int currentSum= 0;
    int  n=nums.size();

    for(int i=0; i<n;i++){
          currentSum+= nums[i];
          maxSum=max(maxSum,currentSum);

        if(currentSum<0){
            currentSum=0;
        }
   
    }

    return maxSum;
}

int main() {
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    
    cout << maxSubArray(nums) << endl;

    return 0;
}