#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isPalindrome(string s)
    {
        int sz = s.size();
        string final;
        for (int i = 0; i < sz; i++)
        {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9') || (s[i] >= 'a' && s[i] <= 'z'))
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    s[i] = s[i] + 32;
                }

                final.push_back(s[i]);
            }
        }

        sz = final.size();
        for (int i = 0, j = sz - 1; i < sz; i++, j--)
        {
            if (final[i] != final[j])
                return false;
        }

        return true;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    return 0;
}