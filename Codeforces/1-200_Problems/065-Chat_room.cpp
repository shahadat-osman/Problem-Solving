#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word = "hello", inp_word;
    cin >> inp_word;

    int i, j, found = 0;
    for (i = 0, j = 0; i < inp_word.size(); i++)
    {
        if (inp_word[i] != word[j])
            continue;
        if (inp_word[i] == word[j])
        {
            found++;
            j++;
        }
    }
    if (found == word.size())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}