#include <iostream>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            freq[nums[i]]++;
        }

        for (auto elem : freq)
        {
            if (elem.second == 1)
            {
                return elem.first;
            }
        }
        return 0;
    }
};