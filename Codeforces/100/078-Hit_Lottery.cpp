#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long long numb;
    int count = 0;
    cin >> numb;
    while (numb > 0)
    {
        if (numb >= 100)
        {
            count += (numb / 100);
            numb %= 100;
        }
        else if (numb >= 20 && numb < 100)
        {
            count += (numb / 20);
            numb %= 20;
        }
        else if (numb >= 10 && numb < 20)
        {
            count += (numb / 10);
            numb %= 10;
        }
        else if (numb >= 5 && numb < 10)
        {
            count += (numb / 5);
            numb %= 5;
        }
        else if (numb >= 1 && numb < 5)
        {
            count += (numb / 1);
            numb %= 1;
        }
    }
    cout << count;

    return 0;
}