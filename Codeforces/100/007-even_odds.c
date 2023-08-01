#include<stdio.h>
 
int main()
{
    long long int n, pos, op, i, N;
    scanf("%lld %lld", &n, &pos);
    
    {
    if(n%2!=0)
        N=(n/2)+1;
    else
        N=n/2;
    }
    {
    if(pos<=N)
    {
            op=(2*pos)-1;
    }
    else
    {
            op=(pos-N)*2;
    }
    }
    printf("%lld\n", op);
 
    return 0;
}