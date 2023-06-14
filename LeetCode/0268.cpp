//268. Missing Number

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sz, ans=0;
        sz=nums.size()+1;
        vector<int>arr(sz);

        for(int i=0; i<sz-1; i++)
        {
            arr[nums[i]]=1;
        }
        for(int i=0; i<sz; i++)
        {
            if(arr[i]==0)
                ans=i;
        }
        return ans;
    }
};