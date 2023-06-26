#include <bits/stdc++.h>

int modularExponentiation(int x, int n, int m)
{
    long long result = 1;
    long long base = x % m;

    while (n > 0)
    {
        if (n & 1)
        {
            result = (result * base) % m;
        }
        base = (base * base) % m;
        n >>= 1;
    }

    return static_cast<int>(result);
}
