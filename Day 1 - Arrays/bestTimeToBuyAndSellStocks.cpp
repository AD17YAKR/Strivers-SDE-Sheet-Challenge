#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int sz = prices.size();
    int ans = 0, mn = INT_MAX, mx = INT_MIN, ismall = 0, ilarge = 0;
    for (int i = 0; i < sz; i++)
    {
        if (mn > prices[i])
        {
            mn = prices[i];
            ismall = i;
        }
        if (mx < prices[i])
        {
            mx = prices[i];
            ilarge = i;
        }
        if (ilarge < ismall)
        {
            mx = 0;
        }
        ans = max(ans, (mx - mn));
    }
    return ans;
}