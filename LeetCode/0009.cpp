//9. Palindrome Number

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string first= to_string(x);
        string second= first;

        reverse(second.begin(), second.end());

        return first==second;
    }
};