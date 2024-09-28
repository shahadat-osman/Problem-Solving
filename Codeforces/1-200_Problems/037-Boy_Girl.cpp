#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string user_id;
    getline(cin, user_id);

    int i, total_char = 0;
    vector<int> freq(26);
    for (i = 0; i < user_id.size(); i++)
    {
        int indx = user_id[i] - 97;
        freq[indx]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] >= 1)
            total_char++;
    }
    if (total_char % 2 == 0)
        cout << "CHAT WITH HER!\n";

    else
        cout << "IGNORE HIM!\n";

    return 0;
}