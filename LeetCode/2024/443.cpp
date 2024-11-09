// Shahadat Osman
// Date: 07-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    int compress(vector<char> &chars)
    {
        vector<char> dummy(chars);

        chars.clear();
        int count = 1;
        char ch = dummy[0];

        for (int i = 1; i < dummy.size(); i++)
        {
            if (dummy[i] != dummy[i - 1])
            {
                chars.push_back(ch);
                if (count > 1)
                {
                    if (count < 10)
                    {
                        char num = '0' + count;
                        chars.push_back(num);
                    }
                    else
                    {
                        string s = to_string(count);
                        for (int i = 0; i < s.size(); i++)
                        {
                            chars.push_back(s[i]);
                        }
                    }
                }
                count = 1;
            }
            else if (dummy[i] == dummy[i - 1])
            {
                count++;
            }
            ch = dummy[i];
        }
        chars.push_back(ch);
        if (count > 1)
        {
            if (count < 10)
            {
                char num = '0' + count;
                chars.push_back(num);
            }
            else
            {
                string s = to_string(count);
                for (int i = 0; i < s.size(); i++)
                {
                    chars.push_back(s[i]);
                }
            }
        }

        return chars.size();
    }
};