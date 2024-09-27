// Shahadat Osman
// Date: 17-03-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string mergeAlternately(string word1, string word2)
    {
        int s1 = word1.size(), s2 = word2.size(), i = 0, j = 0;

        string myStr;

        while (true)
        {
            if (i == s1 && j == s2)
                break;
            else if (i == s1)
            {
                myStr += word2[j];
                j++;
            }
            else if (j == s2)
            {
                myStr += word1[i];
                i++;
            }
            else
            {
                myStr += word1[i];
                myStr += word2[j];
                i++;
                j++;
            }
        }
        return myStr;
    }
};