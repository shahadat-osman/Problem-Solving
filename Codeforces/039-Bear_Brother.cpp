#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int limak, bob, i=0;
    cin>>limak>>bob;

    while(limak<=bob)
    {
        limak*=3;
        bob*=2;
        i++;
    }
    cout<<i<<"\n";

    return 0;
}