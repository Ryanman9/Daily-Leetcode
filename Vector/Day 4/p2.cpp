// 500. Keyboard Row
// Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of 
// American keyboard.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> findwords(vector <string> &words){
    string row1 = "qwertyuiop";
    string row2 = "asdfghjkl";
    string row3 = "zxcvbnm";

    vector <string> ans;

    for(string word : words){
        int rowid = 0;
        if (row1.find(word[0]) != string::npos){rowid = 1;}
        else if (row2.find(word[0]) != string::npos){rowid = 2;}
        else {rowid = 3;}

        bool valid = true;
        for(char c:word){
            if(rowid == 1 && row1.find(c) == string::npos){valid=false; break;}
            if(rowid == 2 && row2.find(c) == string::npos){valid=false; break;}
            if(rowid == 3 && row3.find(c) == string::npos){valid=false; break;}
        }

        if(valid) ans.push_back(word);
    }
    return ans;
}

int main(){
    vector <string> words = {"askldf", "qweuo", "asfar"};

    cout << "The words only from one row are: "<<endl;
    vector <string> result = findwords(words);

    for (string word : result){
        cout << word << " ";
    }

    return 0;
}