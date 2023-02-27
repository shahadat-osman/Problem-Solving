#include<stdio.h>

int main()
{
    int t, c1, c2, total_c1, total_c2, ans;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d %d", &c1, &c2);
        total_c1=c1;
        total_c2=c2*2;
        if(c1==0)
            ans=1;
        else if(c2==0)
            ans=total_c1+1;
        else
            ans=(total_c1+total_c2)+1;
        
        printf("%d\n", ans);
    }
    return 0;
}