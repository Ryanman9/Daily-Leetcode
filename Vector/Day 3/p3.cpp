// Leetcode Problem 977. Squares of a Sorted Array?

#include <iostream>
#include <vector>
using namespace std;

vector<int> sortedSQarr(vector<int>& nums) {
    int N = nums.size();
    vector<int> result(N);

    int l = 0, r = N - 1, p = N - 1;

    while (l <= r) {
        int l1 = nums[l] * nums[l];
        int r1 = nums[r] * nums[r];

        if (l1 > r1) {
            result[p--] = l1;
            l++;
        } else {
            result[p--] = r1;
            r--;
        }
    }
    return result;
}


int main(){
    vector <int> nums = {-3,-2,1,5,8};

    vector <int> result = sortedSQarr(nums);

    cout << "Squares of sorted array is: ";
    for(int n : result){
        cout << n << " ";
    }

    return 0;
}