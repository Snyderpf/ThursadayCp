
#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int previous = 1;
        int n = nums.size();
        vector<int> prefixProduct(n);
        for (int i = 0; i < n; i++)
        {
            prefixProduct[i] = previous;
            previous *= nums[i];
        }
        vector<int> sufixProduct(n);
        int last = 1;
        for (int i = n - 1; i >= 0; i--)
        {
            sufixProduct[i] = last;
            last *= nums[i];
        }

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            ans[i] = prefixProduct[i] * sufixProduct[i];
        }

        return ans;
    }
};

// [0,2,0,4]