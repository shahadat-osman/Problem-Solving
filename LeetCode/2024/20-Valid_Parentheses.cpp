//previously solved in another method

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string str) {
        stack<int>s;
        for(auto c:str)
        {
            if(c=='(' || c=='{' || c=='[')
                s.push(c);
            
            else
            {
                if(s.empty())
                    return false;
                
                else
                {
                    if(c==')' && s.top()=='(')
                        s.pop();
                    else if(c=='}' && s.top()=='{')
                        s.pop();
                    else if(c==']' && s.top()=='[')
                        s.pop();
                    else
                        return false;
                }
            }
        }
        return s.empty();
    }
};