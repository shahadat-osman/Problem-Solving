#include <stdio.h>
int main()
{
    int t, n, i, k;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &n);
        int ary[n];

        for(i=1; i<n; i++)
        {
            ary[i]=i+1;
            ary[n]=1;
        }
        
        for(i=1; i<=n; i++)
            printf("%d ", ary[i]);
        
        printf("\n");
    }
    return 0;
}