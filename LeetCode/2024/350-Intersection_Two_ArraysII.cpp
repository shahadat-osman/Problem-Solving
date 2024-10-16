// Shahadat Osman
// Date: 08-10-2024
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans_vct;
        if (nums1.size() <= nums2.size())
        {
            sort(nums2.begin(), nums2.end());

            for (int value : nums1)
            {
                int left = 0, right = nums2.size() - 1;
                while (left <= right)
                {
                    int mid = (left + right) / 2;
                    if (value == nums2[mid])
                    {
                        ans_vct.push_back(value);
                        auto it = find(nums2.begin(), nums2.end(), value);
                        nums2.erase(it);
                        break;
                    }
                    else
                    {
                        if (value < nums2[mid])
                            right = mid - 1;
                        else if (value > nums2[mid])
                            left = mid + 1;
                    }
                }
            }
        }
        else if (nums2.size() < nums1.size())
        {
            sort(nums1.begin(), nums1.end());

            for (int value : nums2)
            {
                int left = 0, right = nums1.size() - 1;
                while (left <= right)
                {
                    int mid = (left + right) / 2;
                    if (value == nums1[mid])
                    {
                        ans_vct.push_back(value);
                        auto it = find(nums1.begin(), nums1.end(), value);
                        nums1.erase(it);
                        break;
                    }
                    else
                    {
                        if (value < nums1[mid])
                            right = mid - 1;
                        else if (value > nums1[mid])
                            left = mid + 1;
                    }
                }
            }
        }
        return ans_vct;
    }
};

int main()
{

    return 0;
}