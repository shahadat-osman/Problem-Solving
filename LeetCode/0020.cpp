// 20. Valid Parentheses
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    bool isValid(string s)
    {
        vector<char> v;
        for (int i = 0; i < s.size(); i++)
        {
            if ((int)v.size() == 0)
            {
                v.push_back(s[i]);
            }
            else
            {
                char ch = s[i];
                if (v.back() == '(' && ch == ')')
                {
                    v.pop_back();
                }
                else if (v.back() == '{' && ch == '}')
                {
                    v.pop_back();
                }
                else if (v.back() == '[' && ch == ']')
                {
                    v.pop_back();
                }
                else
                {
                    v.push_back(ch);
                }
            }
        }
        if (v.size() == 0)
            return true;
        else
            return false;
    }
};