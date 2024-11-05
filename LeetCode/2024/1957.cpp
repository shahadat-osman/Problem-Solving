// Shahadat Osman
// Date: 01-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}

class Solution
{
public:
    string makeFancyString(string s)
    {
        if (s.size() == 2)
            return s;

        stack<char> stck;

        int count = 0;

        for (char c : s)
        {
            if (stck.empty())
            {
                stck.push(c);
                count++;
            }
            else if (c != stck.top())
            {
                stck.push(c);
                count = 1;
            }
            else if (c == stck.top())
            {
                if (count < 2)
                {
                    stck.push(c);
                    count++;
                }
            }
        }
        string str = "";

        while (!stck.empty())
        {
            str += stck.top();
            stck.pop();
        }
        reverse(str.begin(), str.end());

        return str;
    }
};