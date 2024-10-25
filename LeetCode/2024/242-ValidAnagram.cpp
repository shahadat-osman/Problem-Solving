// Shahadat Osman
// Date: 26-10-2024
#include <bits/stdc++.h>
using namespace std;

int main() {}

class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if (s == t)
            return true;

        return false;
    }
};