#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long res = 0, curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr += arr[i];
        curr = max(curr, static_cast<long long>(arr[i]));
        res = max(curr, res);
        if (curr < 0)
            curr = 0;
    }
    return res;
}