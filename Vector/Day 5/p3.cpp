// 217. Contains Duplicate

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*bool containsDuplicate(vector<int>& nums){
    for (int i=0; i<nums.size(); i++){
        for (int j=i+1; j<nums.size(); j++){
            if (nums[i]==nums[j]){
                return true;
            }
        }
    }
    return false;
}*/

bool containsDuplicate(vector<int>& nums){
    sort(nums.begin(),nums.end());

    for(int i=0; i<nums.size(); i++){
        if(nums[i]==nums[i-1]){
            return true;
        }
    }
    return false;
}

int main(){
    vector <int> nums = {1,1,2,3,4};

    if (containsDuplicate(nums)){
        cout << "The array contains duplicate elements"<<endl;
    }
    else {
        cout << "The array doesn't contains duplicate elements"<<endl;
    }
    return 0;
}