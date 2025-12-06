#include <iostream>
using namespace std;

void indicesofsum(int arr[], int n, int target){
    bool found = false;

    for (int i=0; i<n; i++){
        for (int j=i+1; j<n; j++){
            if (arr[i]+arr[j]==target){
                cout << i << " and " << j;
                found = true;
            }
        }
    }
    if(!found){
        cout << "No pair found";
    }
}

int main(){
    int arr[] = {1,3,2,5,4,7};
    int n = 6;

    int target;
    cout << "Enter the targeted sum: ";
    cin >> target;

    cout << "The indices are: ";
    indicesofsum(arr,n,target);

    return 0;
}