//1. Two Sum
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        for(int i=0; i<nums.size()-1; i++)
        {
            for(int j=i+1; j<nums.size(); j++)
            {
                if(target==nums[i]+nums[j])
                {
                    return {i,j};
                }
            }
        }
        return {};        
    }
};