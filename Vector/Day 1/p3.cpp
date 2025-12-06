#include <iostream>
#include <vector>
using namespace std;

int appearonce(vector <int> &vec){
    int result = 0;
    for(int val : vec){
        result ^= val;
    }
    return result;
}

int removeduplicates1(vector <int> &vec){
    if (vec.empty()){return 0;}
    int i = 0;
    for (int j=1; j<vec.size(); j++){
        if (vec[j]!=vec[i]){
            i++;
            vec[i] = vec[j];
        }
    }
    int newsize = i+1;

    for (int j=0; j<newsize; j++){
        cout << vec[j] << " ";
    }

    return newsize;
}

int removeElements(vector <int> &vec, int value){
    int removed = 0;
    for (int i=0; i<vec.size(); i++){
        if (vec[i] == value){
            vec.erase(vec.begin() + i);
            removed++;
        }
        else{
            i++;
        }
    }
    return removed;
}

int main(){
    vector <int> vec = {1,1,2,3,3};

    cout << appearonce(vec)<<endl;
    removeduplicates1(vec);
    return 0;
}