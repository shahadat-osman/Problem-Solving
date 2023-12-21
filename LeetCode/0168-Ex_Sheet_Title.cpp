#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string convertToTitle(int num)
    {
        string str;
        int mod;
        char ch;

        while (num > 26)
        {
            mod = num % 26;
            if (mod == 0)
            {
                mod = 26;
                ch = mod + 64;

                str += ch;
                num = (num / 26) - 1;
            }
            else
            {
                ch = mod + 64;

                str += ch;
                num /= 26;
            }
        }
        ch = num + 64;

        str += ch;
        reverse(str.begin(), str.end());

        return str;
    }
};