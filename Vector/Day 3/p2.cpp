// Leetcode problem 1295: Find the number of even digit number in the array?

#include <iostream>
#include <vector>
using namespace std;

int counteven(vector <int> & nums){
    int count = 0;

    for (int n: nums){
        if(n>=10 && n<=99 || n>=1000 && n<=9999 || n==100000){
            count++;
        }
    }
    return count;
}

int main(){
    vector <int> nums = {1,22,6666,9,23552,3333};

    cout << "The even number of digits in the array is: " << counteven(nums);

    return 0;
}