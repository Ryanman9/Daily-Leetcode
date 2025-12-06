#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int thirdMax(vector <int> &nums){
    int FMN = INT_MIN;
    int SMN = INT_MIN;
    int TMN = INT_MIN;

    for(int i=0; i<nums.size(); i++){
        if(nums[i]>FMN){
            TMN = SMN;
            SMN = FMN;
            nums[i] = TMN;
        }
        else if(nums[i]!=FMN && nums[i]>SMN){
            TMN = SMN;
            nums[i] = SMN;
        }
        else {
            nums[i] = TMN;
        }
    }
    return TMN;
}

int main(){
    vector <int> nums = {1,2,3};

    cout << "Third largest element is: "<<thirdMax(nums);

    return 0;
}