
#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int clibStairs(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        vector<int> dp;
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i < 3; i++)
        {
            int temp = dp[1] + dp[2];
            dp[0] = dp[1];
            dp[1] = dp[2];
            dp[2] = temp;
        }

        return dp[2];
    }
};