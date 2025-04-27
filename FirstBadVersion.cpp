#include <iostream>
using namespace std;

class Solution
{
public:
    bool isBadVersion(int version)
    {
        return false;
    }

    int firstBadVersion(int n)
    {
        int l = 0, r = n;
        while (l < r)
        {
            int mid = l + (r - l) / 2;

            if (isBadVersion(mid))
            {
                r = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
    }
};