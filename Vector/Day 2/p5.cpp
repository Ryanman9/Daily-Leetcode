#include <iostream>
#include <vector>
using namespace std;

void mergetwoarray(vector <int> &num1, int m, vector <int> &num2, int n){
    int i = m-1;
    int j = n-1;
    int k = m+n-1;
    while (i>=0 && j>=0){
        if (num1[i]>num2[j]){
            num1[k] = num1[i];
            i--;
        }
        else {
            num1[k] = num2[j];
            j--;
        }
        k--;
    }
    while (j>=0){
        num1[k] = num2[j];
        j--;
        k--;
    }
}

int main(){
    vector <int> num1 = {1,2,3,0,0,0};
    vector <int> num2 = {4,5,6};

    cout << "After merging the array: "<<endl;
    mergetwoarray(num1,3,num2,3);
    for(int val : num1){
        cout << val << " ";
    }

    return 0;
}