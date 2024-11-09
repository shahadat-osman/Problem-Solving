// Shahadat Osman
// Date: 07-11-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}
class Solution
{
public:
    char nextGreatestLetter(vector<char> &letters, char target)
    {
        int sz = letters.size();
        int left = 0, right = sz - 1;
        char minn = '{';
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (letters[mid] > target)
            {
                if (letters[mid] < minn)
                    minn = letters[mid];
                right = mid - 1;
            }
            else if (letters[mid] <= target)
                left = mid + 1;
        }
        if (minn == '{')
            return letters[0];
        else
            return minn;
    }
};