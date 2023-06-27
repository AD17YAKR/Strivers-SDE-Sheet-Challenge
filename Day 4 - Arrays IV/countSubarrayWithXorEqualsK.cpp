#include <bits/stdc++.h>

int subarraysXor(vector<int> &arr, int target)
{
    unordered_map<int, int> mp;
    int res = 0, xr = 0;
    mp[xr]++;
    for (int i = 0; i < arr.size(); i++)
    {
        xr ^= arr[i];
        int num = xr ^ target;
        res += mp[num];
        mp[xr]++;
    }
    return res;
}