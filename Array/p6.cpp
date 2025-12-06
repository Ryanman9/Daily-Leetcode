#include <iostream>
using namespace std;

int findAppearingOnce(int arr[], int n){
    int result = 0;
    for (int i=0; i<n; i++){
        result^=arr[i];
    }
    return result;
}

int kadane(int arr[], int n){
    int currSum = arr[0];
    int maxSum = arr[0];

    for (int i=0; i<n; i++){
        currSum = max(arr[i], currSum+arr[i]);
        maxSum = max(maxSum,currSum);
    }
    return maxSum;
}

void kadanesubarray(int arr[], int n){
    int currSum = arr[0];
    int maxsum = arr[0];

    int start = 0, end = 0;
    int tempstart = 0;

    for (int i=0; i<n; i++){
        if(currSum+arr[i]<arr[i]){
            currSum = arr[i];
            tempstart = i;
        }
        else{
            currSum+=arr[i];
        }

        if (currSum>maxsum){
            maxsum = currSum;
            start = tempstart;
            end = i;
        }
    }
    cout << "The kadane subarray is: ";
    for (int i=start; i<=end; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n=9;

    // cout << "The elements that appear only once is: "<<findAppearingOnce(arr,n);
    cout << "The maximum sub array is: " << kadane(arr,n);
    cout << endl;
    kadanesubarray(arr,n);

    return 0;
}