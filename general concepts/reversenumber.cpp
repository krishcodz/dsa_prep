#include <bits/stdc++.h>
class Solution
{
public:
    long reverse(long x)
    {
        long revnum = 0, lastnum;
        bool neg = false;
        if (x < 0)
        {
            neg = true;
            x = -x;
        }
        while (x > 0)
        {
            lastnum = x % 10;
            x = x / 10;
            revnum = (revnum * 10) + lastnum;
        }
        if (revnum > 2147483647 || revnum < -2147483648)
        {
            return 0;
        }
        if (neg)
        {
            revnum = -revnum;
        }
        return revnum;
    }
};