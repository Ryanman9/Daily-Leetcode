#include <iostream>
#include <vector>
using namespace std;

vector <int> sortArrayByParity(vector<int>& nums){
    int n = nums.size();

    int i = 0;
    int j = n-1;

    while(i<j){
        if(nums[i]%2 > nums[j]%2){
            swap(nums[i],nums[j]);
        }
        if(nums[i]%2 == 0) i++;
        if(nums[j]%2 == 1) j--;
    }
    return nums;
}

int main(){
    vector <int> nums = {3,1,2,5,8,6};

    cout << "After sorting the array by parity: "<<endl;
    vector <int> result = sortArrayByParity(nums);

    for (int x : result){
        cout << x << " ";
    }

    return 0;
}