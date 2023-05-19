#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int count=0;
    for(int i=1000; i>0; i--)
    {
        cout<<i<<" ";
        count++;
        if(count==5)
        {
            cout<<"\n";
            count=0;
        }
    }

    return 0;
}