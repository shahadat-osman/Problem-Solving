#include<stdio.h>

int main()
{
    int day, bowl, plate, type, count=0, i;
    scanf("%d %d %d", &day, &bowl, &plate);

    for(i=1; i<=day; i++)
    {
        scanf("%d", &type);
        if(type==1)
        {
            if(bowl<=0)
                count++;
            else
                bowl--;
        }
        else if(type==2)
        {
            if(plate<=0 && bowl<=0)
                count++;
            
            else if(plate<=0 && bowl>0)
                bowl--;
            else 
                plate--;
        }
    }

    printf("%d\n", count);
    return 0;
}

    /* int ary[day];
    for(i=1; i<=day; i++)
        scanf("%d", &ary[i]);
    
    for(i=1; i<=day; i++)
    {
        if(ary[i]==1)
        {
            bowl--;
            if(bowl<0)
                count++;
        }   
        if(ary[i]==2)
        {
            plate--;
            if(plate<0 && bowl<0)
                count++;
        }
    } */