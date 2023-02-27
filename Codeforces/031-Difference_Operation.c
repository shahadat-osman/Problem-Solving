#include<stdio.h>

int main()
{
    int t, i, n, count;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int ary[n];
        for(i=1; i<=n; i++)
        {
            scanf("%d", &ary[i]);
        }
        for(i=2; i<=n; i++)
        {
            if(ary[i]%ary[1]==0)
                count++;
        }
        if(count==(n-1))
            printf("Yes\n");
        else 
            printf("No\n");
        
        count=0;
    }
    return 0;
}