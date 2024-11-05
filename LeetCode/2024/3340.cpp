// Shahadat Osman
// Date: 03-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    bool isBalanced(string num)
    {
        int odd = 0, even = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (i % 2 == 0)
            {
                odd += (num[i] - 48);
            }
            else
                even += (num[i] - 48);
        }

        if (odd == even)
            return true;
        else
            return false;
    }
};