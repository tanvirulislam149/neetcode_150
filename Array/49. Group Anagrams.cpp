#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        vector<string> temp;
        for(int i = 0; i < strs.size(); i++){
            string str1 = strs[i];
            sort(str1.begin(), str1.end());
            if(find(temp.begin(), temp.end(), str1) != temp.end()){
                continue;
            }

            temp.push_back(str1);
            
            vector<string> s1;
            for(int j = i+1; j < strs.size()-1; j++){
                string str2 = strs[j];
                sort(str2.begin(), str2.end());
                if(str1 == str2){
                    if(s1.empty()){
                        s1.push_back(strs[i]);
                    }
                    s1.push_back(strs[j]);
                }
            }
            if(i == strs.size()-1){
                s1.push_back({strs[i]});
            }
            v.push_back(s1);
        }
        return v;
    }
};