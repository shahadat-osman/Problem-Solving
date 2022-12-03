#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, j, n=5, x, y, ary[n][n];
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            scanf("%d", &ary[i][j]);
            if(ary[i][j]==1)
                x=i, y=j;
        }
    }
    printf("%d\n", abs(3-x)+abs(3-y));
}