#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string n1, n2;
    cin >> n1 >> n2;

    int i;
    vector<int> arr;
    for (i = 0; i < n1.size(); i++)
    {
        if (n1[i] != n2[i])
            arr.push_back(1);
        else
            arr.push_back(0);
    }
    for (i = 0; i < arr.size(); i++)
        cout << arr[i];
    cout << "\n";

    return 0;
}