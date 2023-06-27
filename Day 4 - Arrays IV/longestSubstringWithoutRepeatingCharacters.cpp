#include <bits/stdc++.h>

int uniqueSubstrings(string &s)
{
    // Write your code here
    int start = 0, end = s.size();
    int res = 0;
    unordered_map<char, int> mp;
    for (int i = 0; i < end; i++)
    {
        char ch = s[i];
        mp[ch]++;
        while (mp[ch] > 1)
        {
            mp[s[start]]--;
            start++;
        }
        res = max(res, i - start + 1);
    }
    return res;
}