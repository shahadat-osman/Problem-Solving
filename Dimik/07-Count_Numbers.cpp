//unsolved
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, count=1;
    string str;
    cin>>t;
    while(t--)
    {
        getchar();
        getline(cin, str);
        count=1;
        for(int i=0; i<str.size(); i++)
        {
            if(str[i]==' ')
                count++;
        }
        cout<<count<<"\n";
    }

    return 0;
}
/* 
4
1 -2 10000 -50 20 7 445
9
-98 876 65
223 9876452 212
 */