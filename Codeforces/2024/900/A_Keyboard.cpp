// Shahadat Osman
// Date: 07-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "qwertyuiop", s2 = "asdfghjkl;", s3 = "zxcvbnm,./";
    char shift;
    cin >> shift;

    string str, original = "";
    cin >> str;

    if (shift == 'R')
    {
        for (auto c : str)
        {
            for (int i = 0; i < s1.size(); i++)
            {
                if (c == s1[i])
                {
                    if (i == 0)
                        original += c;
                    else
                        original += s1[i - 1];

                    continue;
                }
            }
            for (int i = 0; i < s2.size(); i++)
            {
                if (c == s2[i])
                {
                    if (i == 0)
                        original += c;
                    else
                        original += s2[i - 1];

                    continue;
                }
            }
            for (int i = 0; i < s3.size(); i++)
            {
                if (c == s3[i])
                {
                    if (i == 0)
                        original += c;
                    else
                        original += s3[i - 1];

                    continue;
                }
            }
        }
    }
    else if (shift == 'L')
    {
        for (auto c : str)
        {
            for (int i = 0; i < s1.size(); i++)
            {
                if (c == s1[i])
                {
                    if (i == s1.size() - 1)
                        original += c;
                    else
                        original += s1[i + 1];

                    continue;
                }
            }
            for (int i = 0; i < s2.size(); i++)
            {
                if (c == s2[i])
                {
                    if (i == s2.size() - 1)
                        original += c;
                    else
                        original += s2[i + 1];

                    continue;
                }
            }
            for (int i = 0; i < s3.size(); i++)
            {
                if (c == s3[i])
                {
                    if (i == s3.size() - 1)
                        original += c;
                    else
                        original += s3[i + 1];

                    continue;
                }
            }
        }
    }

    cout << original << "\n";

    return 0;
}
