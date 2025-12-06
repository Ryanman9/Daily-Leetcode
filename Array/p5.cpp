#include <iostream>
using namespace std;

int findmissing1(int arr[], int n){
    int total = n*(n+1)/2;
    int sum =0;
    for (int i=0; i<n-1; i++){
        sum += arr[i];
    }
    return total-sum;
}

int findmissing2(int arr[], int n){
    int xor1 = 0;
    int xor2 = 0;

    for (int i=1; i<=n; i++){
        xor1^=i;
    }
    for (int i=0; i<n-1; i++){
        xor2^=arr[i];
    }

    return xor1^xor2;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the elements in the array: "<<endl;
    for (int i=0; i<n; i++){
        cin >> arr[i];
    }

    cout << "Missing element is (using total sum concept): " << findmissing1(arr,n);
    cout << endl;
    cout << "Missing element is (using xor concept): " << findmissing2(arr,n);
    
    return 0;
}