#include <stdio.h>
int second();
int main()
{
    int t, ans;
    scanf("%d", &t);
    while (t--)
    {
        ans = second();
        printf("%d\n", ans);
    }

    return 0;
}

int second()
{
    int n, i, even = 0, odd = 0;
    scanf("%d", &n);
    int ary[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ary[i]);
        if (ary[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    if (even == odd || even < odd)
        return even;
    else if (even > odd)
        return odd;

    return 0;
}