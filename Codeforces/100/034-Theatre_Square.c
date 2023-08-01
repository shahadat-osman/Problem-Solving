#include<stdio.h>

int main()
{
    long long int n, m, a, ans;
    scanf("%lld %lld %lld", &n, &m, &a);

    ans=((m+a-1)/a)*((n+a-1)/a);
    printf("%lld\n", ans);
    return 0;
}