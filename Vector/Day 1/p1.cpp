#include <iostream>
#include <vector>
using namespace std;

int main(){
    // vector <int> vec = {1,2,3};
    // vector <int> vec(5,99);
    // cout << vec[0] << endl;
    // cout << vec[1] << endl;
    // cout << vec[2] << endl;
    // cout << vec[3] << endl;
    // cout << vec[4] << endl;

    // vector <char> vec = {'a','b','c','d','e'};
    vector <int> vec;
    cout << "Size = " << vec.size() <<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.push_back(55);

    cout << "Size = " << vec.size() <<endl;
    for (int val : vec){
        cout << val << " ";
    }

    vec.pop_back();
    vec.pop_back();

    cout << "Size = " << vec.size() <<endl;
    cout << "Capacity = " << vec.capacity() << endl;
    for (int val : vec){
        cout << val << " ";
    }

    return 0;
}