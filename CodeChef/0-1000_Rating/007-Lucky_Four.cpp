// LUCKYFR
#include <iostream>
using namespace std;

int main()
{
    int t, num;
    cin >> t;
    while (t--)
    {
        cin >> num;

        int count = 0;
        while (num > 0)
        {
            if (num % 10 == 4)
                count++;
            num /= 10;
        }
        cout << count << "\n";
    }
    return 0;
}
