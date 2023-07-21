#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    string result;
    cin >> result;

    int Anton = 0, Danik = 0;

    for (int i = 0; i < result.size(); i++)
    {
        if (result[i] == 'A')
            Anton++;
        else
            Danik++;
    }

    if (Anton > Danik)
        cout << "Anton\n";
    if (Danik > Anton)
        cout << "Danik\n";
    if (Anton == Danik)
        cout << "Friendship\n";

    return 0;
}