// Shahadat Osman
// Date: 27-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int sz = digits.size();
        int carry = 0;

        if (digits[sz - 1] < 9)
        {
            digits[sz - 1] += 1;
        }

        else
        {
            for (int i = sz - 1; i >= 0; i--)
            {
                int x;
                if (i == (sz - 1))
                {
                    digits[i] = 0;
                    carry = 1;
                    continue;
                }

                x = digits[i] + carry;
                if (x < 10)
                {
                    digits[i] = x;
                    carry = 0;
                    break;
                }
                else
                {
                    digits[i] = 0;
                    carry = 1;
                }
            }
        }

        if (carry == 1)
            digits.insert(digits.begin(), carry);

        return digits;
    }
};