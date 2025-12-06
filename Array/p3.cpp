// In this programm I solved some of the basic problems like
// Reversing arr, second largest, palindrome, sum of array.

#include <iostream>
#include <climits>
using namespace std;

void traverse(int arr[], int n){
    
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reversearray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while (start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int findsecondlargest(int arr[], int n){
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i=0; i<n; i++){
        if (arr[i]>largest){
            secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i]!=largest && arr[i]>secondlargest){
            secondlargest = arr[i];
        }
    }
    return secondlargest;
}

bool isPalindrome(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start<end){
        if (arr[start] != arr[end])
            return false;
            start++;
            end--;
    }
    return true;
}

int sumarray(int arr[], int n){
    int sum = 0;
    for (int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int countnumber(int arr[], int n, int key){
    int count = 0;
    for (int i=0; i<n; i++){
        if (arr[i]>key)
        count++;
    }
    return count;
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

    cout << "The elements are: ";
    traverse(arr,n);

    cout << "Reversing array: ";
    reversearray(arr,n);
    traverse(arr,n);

    cout << "Second largest number is: "<<findsecondlargest(arr,n)<<endl;

    if (isPalindrome(arr,n)){
        cout << "The array is palindrome.";
    }
    else {
        cout << "The array is not palindrome.";
    }

    cout << endl;

    cout << "Sum of elements in array is: " << sumarray(arr,n);
    cout << endl;
    int key;
    cout << "Enter the number:";
    cin >> key;

    cout << "Count: " << countnumber(arr,n,key);

    return 0;
}