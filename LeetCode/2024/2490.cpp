// Shahadat Osman
// Date: 02-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    bool isCircularSentence(string sentence)
    {
        stringstream ss(sentence);

        string word, first = "", prev;
        bool flag = true;

        while (ss >> word)
        {
            if (first == "")
                first = word;

            else
            {
                int sz = prev.size() - 1;
                if (prev[sz] != word[0])
                    flag = false;
            }

            prev = word;
        }

        if (flag)
        {
            int sz = word.size() - 1;
            if (first[0] != word[sz])
                flag = false;
        }

        return flag;
    }
};
