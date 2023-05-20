#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0, digit=5;

        while(n>0)
        {
            if(digit==5 || digit==1)
            {
                sum+=n%10;
            }
            digit--;
            n/=10;
        }
        cout<<"Sum = "<<sum<<"\n";
    }

    return 0;
}