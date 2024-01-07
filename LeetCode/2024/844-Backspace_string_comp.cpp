#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, t1;
        for (auto c : s) {

            if (c != '#')
                s1.push(c);
            else if (c == '#' && (!s1.empty()))
                s1.pop();
        }
        for (auto c : t) {

            if (c != '#')
                t1.push(c);
            else if (c == '#' && (!t1.empty()))
                t1.pop();
        }

        if (s1 == t1)
            return true;
        else
            return false;
    }
};