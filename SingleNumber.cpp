#include <iostream>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        int result = 0;

        for (auto elem : nums)
        {
            result ^= elem;
        }
        return result;
    }
};