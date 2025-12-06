#include <iostream>
using namespace std;

void traverse(int arr[], int n){
    
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void movezeroes(int arr[], int n){
    int j=0;
    for (int i=0; i<n; i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
    cout << "After adjusting the zeroes:"<<endl;
    traverse(arr,n);
}

int removeduplicates(int arr[], int n){
    int i=0;
    for (int j=1; j<n; j++){
        if(arr[j]!=arr[i]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}

int main(){
    int arr[] = {1,2,0,0,3,0,4};
    int n = 7;
    
    movezeroes(arr,n);
    int newsize = removeduplicates(arr,n);
    
    cout << "After removing the duplicate elements: ";
    for (int i=0; i<newsize; i++){
        cout << arr[i] << " ";
    }
    
    return 0;
}