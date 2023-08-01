#include<stdio.h>
int main()
{
    int n, l, r, i, j, x, sum=0, s_sum=0;
    scanf("%d %d %d", &n, &l, &r);
    
    for(i=1, j=1; i<=l; j*=2, i++)
    {
        if(i==1)
        {
            x=n-l;
            while(x--)
                sum+=j;  
        }
        sum+=j;
    }
    
    for(i=1, j=1; i<=r; j*=2, i++)
    {
        if(i==r)
        {
            x=n-r;
            while(x--)
                s_sum+=j;  
        }
        s_sum+=j;
    }
    printf("%d %d\n", sum, s_sum);
}