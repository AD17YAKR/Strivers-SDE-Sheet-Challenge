#include <bits/stdc++.h>

vector<int> ninjaAndSortedArrays(vector<int> &arr1, vector<int> &arr2, int m, int n)
{
    vector<int> res;
    int i = 0, j = 0;
    while (i < m and j < n)
    {
        if (arr1[i] <= arr2[j])
        {
            res.emplace_back(arr1[i]);
            ++i;
        }
        else
        {
            res.emplace_back(arr2[j]);
            ++j;
        }
    }
    while (i < m)
        res.emplace_back(arr1[i++]);

    while (j < n)
        res.emplace_back(arr2[j++]);

    return res;
}