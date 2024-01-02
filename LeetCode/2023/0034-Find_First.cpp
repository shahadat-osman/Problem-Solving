//34. Find First and Last Position of Element in Sorted Array

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int strt=0, end=nums.size()-1, mid;

        int st_pos=-1;
        while(strt<=end)
        {
            mid=strt+(end-strt)/2;

            if(nums[mid]==target)
            {
                st_pos=mid;
                end=mid-1;
            }
            else if(nums[mid]>target)
                end=mid-1;
                
            else if(nums[mid]<target)
                strt=mid+1;
        }

        int end_pos=-1;
        strt=0;
        end=nums.size()-1;

        while(strt<=end)
        {
            mid=strt+(end-strt)/2;

            if(nums[mid]==target)
            {
                end_pos=mid;
                strt=mid+1;
            }
            else if(nums[mid]>target)
                end=mid-1;
                
            else if(nums[mid]<target)
                strt=mid+1;
        }

        return {st_pos, end_pos};
    }
};