#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string word, sm;
    cin >> word;

    sm = word;
    int i, found = 0;
    for (i = 1; i < word.size(); i++)
    {
        if (word[0] >= 97 && word[0] <= 122)
        {
            if (word[i] >= 65 && word[i] <= 90)
                word[i] += 32;
            else if (word[i] >= 97 && word[i] <= 122)
            {
                found = 1;
                break;
            }
        }
        if (word[0] >= 65 && word[0] <= 90)
        {
            if (word[i] >= 65 && word[i] <= 90)
                word[i] += 32;
            else if (word[i] >= 97 && word[i] <= 122)
            {
                found = 1;
                break;
            }
        }
    }
    if (found == 1)
        cout << sm << "\n";
    else
    {
        if (word[0] >= 97 && word[0] <= 122)
            word[0] -= 32;
        else if (word[0] >= 65 && word[0] <= 90)
            word[0] += 32;
        cout << word << "\n";
    }

    return 0;
}