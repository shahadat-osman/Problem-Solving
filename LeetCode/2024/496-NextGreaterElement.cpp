// Shahadat Osman
// Date: 25-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> vct;
        int sz = nums2.size();
        for (int val : nums1)
        {
            int flag = 0, max = -1;
            for (int i = 0; i < sz; i++)
            {
                if (val == nums2[i])
                {
                    flag = 1;
                    max = val;
                    continue;
                }
                if (flag == 1)
                {
                    if (nums2[i] > max)
                    {
                        max = nums2[i];
                        break;
                    }
                }
            }
            if (val != max)
                vct.push_back(max);
            else
                vct.push_back(-1);
        }

        return vct;
    }
};