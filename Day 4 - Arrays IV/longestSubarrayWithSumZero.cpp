#include <bits/stdc++.h>

// The whole idea is to find the distance between two equal sums because in
// between, the sum is zero for the numbers to reappear.

int LongestSubsetWithZeroSum(vector<int> &arr)
{
    int n = arr.size();
    unordered_map<int, int> prefix;
    int sum = 0, res = 0;
    for (int i = 0; i < n; i++)
    {
        // Calculation of running sum.
        sum += arr[i];

        // If the sum is zero, then we change res to i + 1 because a running sum will
        // always have a greater length as it will go from 0 to that position.
        if (sum == 0)
            res = i + 1;

        // If we find that this sum already exists previously, which means somewhere
        // in between the total sum is zero.
        if (prefix.find(sum) != prefix.end())
            res = max(res, i - prefix[sum]);
        // If not, we simply store the index at which we are getting the sum to
        // calculate the distance.
        else
            prefix[sum] = i;
    }
    return res;
}
