#include <iostream>
#include <stack>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; n++)
            {
                if (j == i)
                {
                    continue;
                }
                if (nums[i] == nums[j])
                {
                    flag = true;
                }
            }
            if (!flag)
            {
                return nums[i];
            }
        }
        return 0;
    }
};