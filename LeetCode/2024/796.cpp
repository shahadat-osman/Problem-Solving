// Shahadat Osman
// Date: 03-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}
class Solution
{
public:
    bool rotateString(string s, string goal)
    {
        if (s.size() != goal.size())
            return false;

        else
        {
            int sz = s.size();
            for (int i = 0; i < sz; i++)
            {
                s += s[0];
                s.erase(s.begin());

                if (s == goal)
                {
                    return true;
                }
            }
        }

        return false;
    }
};