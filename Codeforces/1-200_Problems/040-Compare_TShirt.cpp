#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s1, s2;
    char ans;

    int t;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;

        int s1_sz = s1.size(), s2_sz = s2.size();

        char ch1 = s1[s1_sz - 1], ch2 = s2[s2_sz - 1];

        if (ch1 == ch2)
        {
            if (s1_sz == s2_sz)
                ans = '=';

            if (ch1 == 'S')
            {
                if (s1_sz < s2_sz)
                    ans = '>';
                else if (s1_sz > s2_sz)
                    ans = '<';
            }
            if (ch1 == 'L')
            {
                if (s1_sz < s2_sz)
                    ans = '<';
                else if (s1_sz > s2_sz)
                    ans = '>';
            }
        }
        if (ch1 != ch2)
        {
            if ((ch1 == 'S' || ch1 == 'M') && (ch2 == 'L' || ch2 == 'M'))
                ans = '<';
            if ((ch2 == 'S' || ch2 == 'M') && (ch1 == 'L' || ch1 == 'M'))
                ans = '>';
        }

        cout << ans << "\n";
    }

    return 0;
}
