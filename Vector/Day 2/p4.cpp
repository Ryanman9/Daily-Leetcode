#include <iostream>
#include <vector>
using namespace std;

int searchIndex(vector <int> &nums,int target){
    int left = 0;
    int right = nums.size()-1;
    int mid = 0;
    while(left <=right){
        mid = left + (right-left)/2;

        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]<target){
            left = mid+1;
        }
        else {
            right = mid-1;
        }
    }
    return left;
}

int main(){
    vector <int> nums = {1,2,4,5};

    int target;
    cout << "Enter the target value: ";
    cin >> target;

    cout << "The index of the target value should be: "<< searchIndex(nums,target);
}