// Leetcode problem 485: Find Max number of consecutive one in binary array?

#include <iostream>
#include <vector>
using namespace std;

int findmaxone(vector <int>& nums){
    int currcount = 0;
    int maxcount = 0;

    for(int n: nums){
        if(n==1){
            currcount++;
            if(currcount>maxcount){
                maxcount = currcount;
            }
        }

        else{
            currcount=0;
        }
    }
    return maxcount;
}

int main(){
    vector <int> nums = {1,0,1,1,1,0,1,1};

    cout << "Max number of consecutive one is: " << findmaxone(nums);
    return 0;
}