// Shahadat Osman
// Date: 12-11-2024
#include <bits/stdc++.h>
using namespace std;

int main(){}


// Forward declaration of guess API.
// @param  num   your guess
// @return 	     -1 if num is higher than the picked number			      1 if num is lower than the picked number
            //   otherwise return 0
int guess(int num);


class Solution
{
public:
    int guessNumber(int n)
    {
        long long left = 1, right = n, numb, mid;
        while (left <= right)
        {
            mid = (left + right) / 2;
            numb = guess(mid);

            if (numb < 0)
                right = mid - 1;
            else if (numb > 0)
                left = mid + 1;
            else
                break;
        }
        return mid;
    }
};