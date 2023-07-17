#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word;
    int cap_char=0, small_char=0;
    cin>>word;

    for(int i=0; i<word.size(); i++)
    {
        if(word[i]>=65 && word[i]<=90)
            cap_char++;
        else 
            small_char++;
    }
    if(small_char>=cap_char)
    {
        for(int i=0; i<word.size(); i++)
        {
            if(word[i]>=65 && word[i]<=90)
                word[i]+=32;
            else
                continue;
        }
    }
    else
    {
        for(int i=0; i<word.size(); i++)
        {
            if(!(word[i]>=65 && word[i]<=90))
                word[i]-=32;
            else
                continue;
        }
    }

    cout<<word<<"\n";

    return 0;
}