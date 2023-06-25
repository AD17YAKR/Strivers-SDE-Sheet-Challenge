#include "bits/stdc++.h"

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    int left = 0, right = m - 1, top = 0, bottom = n - 1;

    while (left < right && top < bottom)
    {
        int temp = mat[top][left];
        for (int col = left; col <= right; col++)
            swap(temp, mat[top][col]);

        top++;

        for (int row = top; row <= bottom; row++)
            swap(temp, mat[row][right]);

        right--;

        for (int col = right; col >= left; col--)
            swap(temp, mat[bottom][col]);

        bottom--;

        for (int row = bottom; row >= top; row--)
            swap(temp, mat[row][left]);

        left++;

        mat[top - 1][left - 1] = temp;
    }
}
