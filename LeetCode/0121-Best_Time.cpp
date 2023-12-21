#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int i, ans=0, profit=0, sell=prices[0];
        for(i=0; i<prices.size(); i++)
        {
            if(prices[i]<sell)
                sell=prices[i];
            
            ans=prices[i]-sell;
            if(ans>profit)
                profit=ans;
        }

        return profit;
    }
};

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    

    return 0;
}