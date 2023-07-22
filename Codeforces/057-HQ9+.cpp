#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int flag = 0;
    string program;
    cin >> program;

    for (int i = 0; i < program.size(); i++)
    {
        if (program[i] == 'H' || program[i] == 'Q' || program[i] == '9')
            flag = 1;
    }
    if (flag == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}