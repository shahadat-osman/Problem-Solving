// Shahadat Osman
// Date: 11-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> stk;
        for (auto c : s)
        {
            if ((!stk.empty()) && stk.top() == c)
                stk.pop();
            else
                stk.push(c);
        }

        string str = "";
        while (!stk.empty())
        {
            str += stk.top();
            stk.pop();
        }
        reverse(str.begin(), str.end());
        return str;
    }
};