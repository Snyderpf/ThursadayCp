#include <vector>
using namespace std;
class Solution
{

public:
    bool isEven(int num)
    {
        int size = 0;
        while (num != 0)
        {
            num /= 10;
            size++;
        }

        return size % 2 == 0;
    }

    int findNumbers(vector<int> &nums)
    {
        int count = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++)
        {
            if (isEven(nums[i]))
            {
                count++;
            }
        }
        return count;
    }
};
