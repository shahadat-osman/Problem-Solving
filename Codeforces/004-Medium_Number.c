#include<stdio.h>
int main()
{
    int j, min, i, n, num[3], med[3], k;
    scanf("%d", &n);
    int testc[n], result[n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &num[j]);
        }
        min=num[0];
        for(j=0; j<3; j++)
        {
            if(num[j]<min)
                min=num[j];
                med[0]=min;
        }
        int max=num[0];
        for(j=0; j<3; j++)
        {
            if(num[j]>max)
                max=num[j];
                med[2]=max;
        }
        for(j=0; j<3; j++)
        {
            if(num[j]!=min && num[j]!=max)
                med[1]=num[j];
        }
        result[i]=med[1];
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", result[i]);
    }
    
}