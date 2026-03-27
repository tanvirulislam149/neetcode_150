#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        map<string, vector<string>> str_map;
        for(string str : strs){
            string s = str;
            sort(s.begin(), s.end());
            if(str_map.find(s) == str_map.end()){  // didn't find the key in map
                str_map.insert({s, {str}});
            } else {
                str_map[s].push_back(str);
            }
        }
        for(auto it : str_map){
            vector<string> temp_v;
            for(string s : it.second){
                temp_v.push_back(s);
            }
            v.push_back(temp_v);
        }
        return v;
    }
};