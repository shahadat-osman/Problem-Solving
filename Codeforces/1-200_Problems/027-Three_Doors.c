#include <stdio.h>
int solution();

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        if (solution() == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }

    return 0;
}
int solution()
{
    int x, a, b, c;
    scanf("%d %d %d %d", &x, &a, &b, &c);

    if (x == 1 || x == 2 || x == 3)
    {
        if (a == 2 || a == 3)
        {
            if (b == 3 || c == 2)
                return 1;
        }
        if (b == 1 || b == 3)
        {
            if (a == 3 || c == 1)
                return 1;
        }
        if (c == 1 || c == 2)
        {
            if (a == 2 || b == 1)
                return 1;
        }
    }

    return 0;
}