// In this programm I solved some of the basic problems like
// finding max and min,count occurance,check if array is sorted.

#include <iostream>
using namespace std;

void traverse(int arr[], int n){
    cout << "The elements are: ";
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findmax(int arr[], int n){
    int max = arr[0];
    for(int i=0; i<n; i++){
        if (arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

int findmin(int arr[], int n){
    int min = arr[0];
    for(int i=0; i<n; i++){
        if (arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int countoccurance(int arr[], int n, int key){
    int count = 0;
    for (int i=0; i<n; i++){
        if (arr[i] == key){
            count ++;
        }
    }
    return count;
}

bool issorted(int arr[], int n){
    for (int i=0; i<n; i++){
        if (arr[i-1]>arr[i])
        return false;
    }
    return true;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int n = 7;

    traverse(arr,n);
    cout << "Max elements is: " << findmax(arr,n) <<endl;
    cout << "Min elements is: " << findmin(arr,n) <<endl;

    int key;
    cout << "Enter the element you want to count occurance:";
    cin >> key;

    cout << "Occurance: " << countoccurance(arr,n,key);
    cout << endl;

    if (issorted(arr,n)){
        cout << "The array is not sorted";
    }
    else {
        cout << "The array is sorted";
    }
    return 0;
}