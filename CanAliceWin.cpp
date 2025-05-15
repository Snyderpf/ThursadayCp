class Solution
{
public:
    bool canAliceWin(vector<int> &nums)
    {

        int n = nums.size();
        int single_digits = 0, double_digits = 0;

        for (int i = 0; i < n; i++)
        {
            if (nums[i] <= 9)
            {
                single_digits += nums[i];
            }
            else
            {
                double_digits += nums[i];
            }
        }
        return single_digits != double_digits;
    }
};