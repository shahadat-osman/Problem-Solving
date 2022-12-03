#include<stdio.h>
int main()
{
    int n, m, i, j, select, count;

    scanf("%d %d", &n, &m);
    int n_ary[n], m_ary[m], output[m];
    for(i=1; i<=n; i++)
    {
        scanf("%d", &n_ary[i]);
    }
    for(i=1; i<=m; i++)
    {
        scanf("%d", &m_ary[i]);
    }
    for(i=1; i<=m; i++)
    {
        count=n;
        select=m_ary[i];
        for(j=n; j>0; j--)
        {
            if(n_ary[j]<select)
            {
                count=j;
                output[i]=count;
                break;
            }
            else
                output[i]=0;
        }
    }
    for(i=1; i<=m; i++)
    {
        printf("%d ", output[i]);
    }
}