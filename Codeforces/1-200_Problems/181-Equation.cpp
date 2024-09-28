// Shahadat Osman
// Date: 24-01-2024
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
            return true;
    }
    return false;
}
int main()
{
    int n, num1, num2;
    cin >> n;
    while (true)
    {
        int n1 = rand();
        int n2 = n1 + n;

        if (is_prime(n1) && is_prime(n2))
        {
            num1 = n1;
            num2 = n2;
            break;
        }
    }
    cout << num2 << " " << num1 << "\n";
    return 0;
}