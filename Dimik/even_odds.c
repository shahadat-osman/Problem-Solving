#include<stdio.h>
int main()
{
    int t,i=0, j;
    scanf("%d", &t);
    while(i<t)
    {
        scanf("%d",&j);
        if(j%2==0)
        printf("even\n");
        else
        printf("odd\n");
        i++;
    }
    
    return 0;
}