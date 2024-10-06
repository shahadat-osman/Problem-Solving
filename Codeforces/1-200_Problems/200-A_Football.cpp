// Shahadat Osman
//  Date: 06-10-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> vct(n), teams;

    for (int i = 0; i < n; i++)
        cin >> vct[i];

    if(n==1)
    {
        cout<<vct[0];
        return 0;
    }
    for (string name : vct)
    {
        if (teams.empty())
            teams.push_back(name);
        if (name != teams[0])
            teams.push_back(name);
        if (teams.size() == 2)
            break;
    }

    int team_A = 0, team_B = 0;
    for (string name : vct)
    {
        if (name == teams[0])
            team_A++;
        else
            team_B++;
    }

    if (team_A > team_B)
        cout << teams[0] << "\n";

    else
        cout << teams[1] << "\n";

    return 0;
}