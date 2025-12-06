#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestcommonprefix(vector<string> &strs){
    if (strs.empty()){
        return "";
    }
    string ans = "";

    for (int i=0; i<strs[0].size(); i++){
        char ch = strs[0][i];

        for (int j=1; j<strs.size(); j++){
            if (i>strs[j].size() || strs[j][i]!=ch){
                return ans;
            }
        }
        ans += ch;
    }
    return ans;
}

string longestcommonprefix2(vector <string> &strs){
    if (strs.empty()){
        return "";
    }

    int prefixlen = strs[0].size();

    for (int i=1; i<strs.size(); i++){
        int j=0;
        while (j<prefixlen && j<strs[i].size() && strs[i][j]==strs[0][j]){
            j++;
        }
        prefixlen = j;

        if(prefixlen == 0){
            return "";
        }
    }
    return strs[0].substr(0,prefixlen);
}

string longestcommonprefix3(vector <string> &strs){
    if (strs.empty()){
        return "";
    }

    string prefix = strs[0];

    for (int i=1; i<strs.size(); i++){
        while(strs[i].find(prefix)!=0){
            prefix = prefix.substr(0,prefix.size()-1);
        }
        if(prefix.empty()){
            return "";
        }
    }
    return prefix;
}

int main(){
    vector <string> strs = {"coder", "coding", "code", "codered"};

    cout << "Longest commonprefix is: "<<endl;
    cout << longestcommonprefix(strs) << endl;
    cout << longestcommonprefix2(strs) <<endl;
    cout << longestcommonprefix3(strs);

    return 0;
}