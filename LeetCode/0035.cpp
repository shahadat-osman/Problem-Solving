//35. Search Insert Position
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size() - 1, mid;
        int ind = nums.size();

        while (start <= end)
        {
            mid = (start + end) / 2;
            
            if (nums[mid] == target)
            {
                ind = mid;
            }
            if (nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                ind=mid;
                end = mid - 1;
            }
        }
        return ind;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    

    return 0;
}