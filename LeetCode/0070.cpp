#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int climbStairs(int n) 
    {
        int first=1, second=2, third;
        if(n<=3)
            return n;
        else
        {
            for(int i=0; i<n-2; i++)
            {
                third=first+second;
                first=second;
                second=third;
            }
            return third;
        }
    }
};