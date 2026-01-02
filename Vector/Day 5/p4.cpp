// 1800. Maximum Ascending Subarray Sum

#include <iostream>
#include <vector>
using namespace std;

int maxAscendingSum(vector<int>& nums){
    int maxsum = nums[0];
    int currsum = nums[0];

    for(int i=1; i<nums.size(); i++){
        if(nums[i]>nums[i-1]){
            currsum += nums[i];
        }
        else{
            currsum = nums[i];
        }
        maxsum = max(maxsum,currsum);
    }
    
    return maxsum;
}

int main(){
    vector <int> nums = {10,20,30,5,10,50};

    cout << "Maximum Ascending subarray sum is: "<< maxAscendingSum(nums) <<endl;

    return 0;
}