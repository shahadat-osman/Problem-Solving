#include <bits/stdc++.h>
using namespace std;

int main()
{
}
class Solution
{
public:
    int titleToNumber(string columnTitle)
    {
        int i, j, digit_sum = 0, char_to_numb = 0, colmn_numb = 0;
        int sz = columnTitle.size() - 1;
        for (i = sz, j = 0; i >= 0; i--, j++)
        {
            char_to_numb = columnTitle[i] - 64;
            digit_sum = (pow(26, j)) * char_to_numb;

            colmn_numb += digit_sum;
        }

        return colmn_numb;
    }
};