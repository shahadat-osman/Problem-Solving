// 704. Binary Search

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int start = 0, end = nums.size() - 1, mid;
        int flag = 0;
        while (start <= end)
        {
            mid = (start + end) / 2;
            if (nums[mid] == target)
            {
                return mid;
                flag = 1;
            }
            if (nums[mid] > target)
            {
                end = mid - 1;
            }
            if (nums[mid] < target)
            {
                start = mid + 1;
            }
        }
        return -1;
    }
};