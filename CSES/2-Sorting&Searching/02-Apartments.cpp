// Shahadat Osman
// Date: 19-03-2025
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n, m, k, count = 0;
    cin >> n >> m >> k;

    priority_queue<ll> applicants, apartments;

    while (n--)
    {
        ll x;
        cin >> x;
        applicants.push(x);
    }
    while (m--)
    {
        ll x;
        cin >> x;
        apartments.push(x);
    }

    while (!applicants.empty() && !apartments.empty())
    {
        ll diff = abs(applicants.top() - apartments.top());
        if (diff <= k)
        {
            count++;
            applicants.pop();
            apartments.pop();
        }
        else if (apartments.top() > applicants.top())
        {
            apartments.pop();
        }
        else if (apartments.top() < applicants.top())
        {
            applicants.pop();
        }
        else
        {
            applicants.pop();
            apartments.pop();
        }
    }

    cout << count << "\n";

    return 0;
}
