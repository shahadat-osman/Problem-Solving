// Shahadat Osman
// Date: 17-10-2024
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        vector<int> vct = nums;
        sort(vct.begin(), vct.end());
        int left = 0, right = vct.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (vct[mid] == target)
            {
                auto it = find(nums.begin(), nums.end(), vct[mid]);
                int indx = distance(nums.begin(), it);
                return indx;
            }
            if (target < vct[mid])
            {
                right = mid - 1;
            }
            else if (target > vct[mid])
                left = mid + 1;
        }

        return -1;
    }
};
int main()
{

    return 0;
}