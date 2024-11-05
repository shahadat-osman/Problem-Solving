// Shahadat Osman
// Date: 04-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    string compressedString(string word)
    {
        if (word.size() == 1)
        {
            char ch = word[0];
            string comp = "1";
            comp += ch;
            return comp;
        }

        int sz = word.size(), count = 1;
        string comp = "";
        char c = word[0];
        for (int i = 1; i < sz; i++)
        {
            if (count == 9 || word[i] != word[i - 1])
            {
                char num = count + '0';
                comp += num;
                comp += c;
                count = 1;
                c = word[i];
            }
            else if (word[i] == word[i - 1])
            {
                count++;
                c = word[i];
            }
        }
        char num = count + '0';
        comp += num;
        comp += c;

        return comp;
    }
};