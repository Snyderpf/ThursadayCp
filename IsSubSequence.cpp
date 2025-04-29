using namespace std;
#include <string>
#include <queue>
class Solution
{
public:
    bool isSubSequence(string s, string t)
    {
        if (t.size() < s.size())
        {
            return false;
        }
        queue<char> q;
        int n = s.size();
        for (int i = 0; i < n; i++)
        {
            q.push(s[i]);
        }

        int j = 0;
        int m = t.size();
        while (!q.empty() && j < m)
        {
            char c = q.front();
            if (c == t[j])
            {
                q.pop();
            }
            j++;
        }
        return q.empty();
    }
};