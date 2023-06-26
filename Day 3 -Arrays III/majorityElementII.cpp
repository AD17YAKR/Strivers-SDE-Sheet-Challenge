#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
    vector<int> res;
    int n = arr.size();
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
        if (mp[arr[i]] > n / 3)
        {
            res.emplace_back(arr[i]);
            mp[arr[i]] = -n;
        }
    }
    return res;
}