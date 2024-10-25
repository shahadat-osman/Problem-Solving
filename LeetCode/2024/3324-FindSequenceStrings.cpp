// Shahadat Osman
// Date: 21-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Solution
{
public:
    vector<string> stringSequence(string target)
    {
        vector<string> lists;
        string str = "";

        for (int i = 0; i < target.size(); i++)
        {
            char ch = 'a';
            str += ch;

            while (true)
            {
                lists.push_back(str);

                if (ch == target[i])
                    break;

                ch = ch + 1;
                str[i] = ch;
            }
        }

        return lists;
    }
};