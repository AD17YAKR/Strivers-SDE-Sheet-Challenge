#include <bits/stdc++.h>

int lengthOfLongestConsecutiveSequence(vector<int> &nums, int n)
{
    int res = 1, cur = 1;
    if (n == 0)
        return 0;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] == nums[i + 1])
            continue;
        if (nums[i] + 1 == nums[i + 1])
            cur += 1;
        else
            cur = 1;
        res = max(res, cur);
    }
    return res;
}