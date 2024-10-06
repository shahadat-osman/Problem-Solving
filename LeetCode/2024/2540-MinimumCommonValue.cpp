// Shahadat Osman
// Date: 06-10-2024
//Solved in 30 mins
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) 
    {
        bool found = false;
        int mini;

        if (nums1[0] == nums2[0])
            return nums1[0];

        else if (nums1[0] > nums2[0]) 
        {
            if(nums1[0]>nums2[nums2.size()-1])
                return -1;
            for (int value : nums1) 
            {
                auto it = find(nums2.begin(), nums2.end(), value);
                if (it != nums2.end()) 
                {
                    found = true;
                    mini = value;
                    break;
                }
            }
            if (found)
                return mini;
            else
                return -1;
        } else if (nums1[0] < nums2[0]) 
        {   
            if(nums2[0]>nums1[nums1.size()-1])
                return -1;
            for (int value : nums2) 
            {
                auto it = find(nums1.begin(), nums1.end(), value);
                if (it != nums1.end()) 
                {
                    found = true;
                    mini = value;
                    break;
                }
            }
            if (found)
                return mini;
            else
                return -1;
        }

        return -1;
    }
};

int main()
{
    

    return 0;
}