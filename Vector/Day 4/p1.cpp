// 1089. Duplicate Zeros
// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

#include <iostream>
#include <vector>
using namespace std;

void duplicatezeroes(vector<int> &arr){
    int n = arr.size();
    int zeroes = 0;

    for (int x : arr){
        if(x==0){
            zeroes++;
        }
    }

    int i = n-1;
    int j = n+zeroes-1;

    while (i>=0){
        if(j<n){
            arr[j] = arr[i];
        }

        if(arr[i] == 0){
            j--;
            if(j<n){
                arr[j] = 0;
            }
        }
        i--;
        j--;
    }
}

int main(){
    vector <int> arr={1,0,2,3,0};

    cout << "After duplication of zeroes"<<endl;
    duplicatezeroes(arr);
    for(int x:arr){
        cout << x << " ";
    }

    return 0;
}