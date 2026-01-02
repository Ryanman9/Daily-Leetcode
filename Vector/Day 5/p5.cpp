// 283. Move Zeroes

#include <iostream>
#include <vector>
using namespace std;

/*vector <int> moveZeroes(vector <int> &nums){
    vector <int> newarr;
    for (int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            newarr.push_back(nums[i]);
        }
    }

    for (int i=0; i<nums.size(); i++){
        if(nums[i]==0){
            newarr.push_back(nums[i]);
        }
    }

    return newarr;
}*/

void moveZeroes(vector <int> &nums){
    int j=0;
    for (int i=0; i<nums.size(); i++){
        if(nums[i]!=0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main(){
    vector <int> nums = {0,0,1,0,3,2,5};

    cout << "Zeroes moved: "<<endl;
    // vector <int> result = moveZeroes(nums);
    // for (int x: result){
    //     cout << x << " ";
    // }
    moveZeroes(nums);
    for(int x: (nums)){
        cout << x << " ";
    }
    return 0;
}