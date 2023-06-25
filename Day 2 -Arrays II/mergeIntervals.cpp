#include <bits/stdc++.h>
vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    vector<vector<int>> res;

    sort(intervals.begin(), intervals.end());

    res.push_back(intervals[0]);

    int n = intervals.size(), cur = 0;
    for (int i = 1; i < n; i++)
    {
        if (intervals[i][0] <= res[cur][1] && intervals[i][0] >= res[cur][0])
        {
            if (intervals[i][1] > res[cur][1])
                res[cur][1] = intervals[i][1];
        }
        else
        {
            res.emplace_back(intervals[i]);
            cur++;
        }
    }
    return res;
}
