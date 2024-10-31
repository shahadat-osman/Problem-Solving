// Shahadat Osman
// Date: 31-10-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int i = 0, sz = tickets.size(), count = 0;

        while (tickets[k] != 0)
        {
            if (tickets[i % sz] != 0)
            {
                tickets[i % sz]--;
                count++;
            }
            i++;
        }
        return count;
    }
};