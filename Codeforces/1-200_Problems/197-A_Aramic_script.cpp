// Shahadat Osman
// Date: 04-10-2024
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> script(n), obj(n);

    for (int i = 0; i < n; i++)
        cin >> script[i];

    for (int j = 0; j < n; j++)
    {
        string p = script[j];

        vector<int> freq(26, 0);
        for (int i = 0; i < p.size(); i++)
        {
            freq[int(p[i] - 'a')] += 1;
        }

        string q;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] > 0)
            {
                q += char(i + 'a');
            }
        }
        obj[j] = q;
    }
    
    sort(obj.begin(), obj.end());

    int count = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (obj[i] != obj[i + 1])
            count++;
    }
    cout << count << "\n";

    return 0;
}