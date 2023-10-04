class Solution
{
public:
    bool isPalindrome(long x)
    {
        if (x < 0)
        {
            return false;
        }
        long prevnum = x;
        long revnum = 0;
        while (x > 0)
        {
            int lt = x % 10;
            x /= 10;
            revnum = (revnum * 10) + lt;
        }
        return revnum == prevnum;
    }
};