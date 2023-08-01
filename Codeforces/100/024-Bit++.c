#include<stdio.h>
int main()
{
    int n, i, r=0;;
    char st[4];
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%s", st);
        if(st[0]=='+' || st[1]=='+' || st[2]=='+')
            r++;
        else 
            r--;
    }
    printf("%d\n", r);
}