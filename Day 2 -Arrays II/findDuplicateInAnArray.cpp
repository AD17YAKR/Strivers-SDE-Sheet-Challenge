#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    unordered_map<int, int> mp;

    for (auto it : arr)
    {
        mp[it]++;
    }

    int missing = -1, repeating = -1;
    for (int i = 1; i <= n; i++)
    {
        if (mp.find(i) == mp.end())
            missing = i;
        if (mp[i] > 1)
            repeating = i;
    }
    return {missing, repeating};
}
