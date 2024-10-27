// Shahadat Osman
// Date: 26-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        int sz = nums.size();
        long long int prod = 1;

        int zero_count = 0;

        for (int val : nums)
        {
            if (zero_count > 1)
                break;

            if (val == 0)
            {
                zero_count++;
                continue;
            }
            prod *= val;
        }

        if (zero_count > 1)
        {
            vector<int> vct(sz, 0);
            return vct;
        }

        vector<int> vct;

        if (zero_count == 1)
            for (int val : nums)
            {
                if (val != 0)
                    vct.push_back(0);

                else if (val == 0)
                    vct.push_back(prod);
            }

        else
            for (int val : nums)
            {
                int i = prod / val;
                vct.push_back(i);
            }

        return vct;
    }
};