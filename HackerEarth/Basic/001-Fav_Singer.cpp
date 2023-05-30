#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n, count = 1, sing;
    cin >> n;

    if(n==1)
    {
        cout<<"1\n";
        return 0;
    }
    vector<long long int> playlist(n);
    vector<int> fav;

    for (int i = 0; i < n; i++)
        cin >> playlist[i];

    sort(playlist.begin(), playlist.end());

    for (int i = 1; i < n; i++)
    {
        if (playlist[i] == playlist[i - 1])
            count++;
        else
        {
            fav.push_back(count);
            count = 1;
        }
        if (i == n - 1)
            fav.push_back(count);
    }

    int max = fav[0];
    for (int i = 0; i < n; i++)
        if (fav[i] > max)
            max = fav[i];

    count=0;
    for (int i = 0; i < n; i++)
        if (max == fav[i])
            count++;

    cout<<count<<"\n";

    return 0;
}