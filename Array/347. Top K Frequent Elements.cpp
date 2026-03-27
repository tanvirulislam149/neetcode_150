#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        vector<int> v;
        map<int, int> m;
        for (int n : nums)
        {
            if (m.find(n) != m.end())
            { // found the key
                m[n] = m[n] + 1;
            }
            else
            {
                m.insert({n, 1});
            }
        }
        vector<int> tv;
        for (auto i : m)
        {
            tv.push_back(i.second);
        }
        sort(tv.begin(), tv.end(), greater<int>());
        for (int i = 0; i < k; i++)
        {
            for (auto it : m)
            {
                if (tv[i] == it.second)
                {
                    cout << tv[i] << " " << it.second << "\n";
                    v.push_back(it.first);
                    m.erase(it.first);
                }
            }
        }
        return v;
    }
};