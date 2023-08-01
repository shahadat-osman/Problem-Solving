#include <stdio.h>
#include <string.h>

int main()
{
    int t, wheel, i, j, moves;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d", &wheel);
        int wheel_position[wheel];
        for(i=0; i<wheel; i++)
        {
            scanf("%d", &wheel_position[i]);
        }
        for(i=0; i<wheel; i++)
        {
            scanf("%d", &moves);
            char moves_str[moves];
            scanf("%s", moves_str);

            for(j=0; j<strlen(moves_str); j++)
            {
                if(moves_str[j]=='D')
                    wheel_position[i]+=1;

                else if(moves_str[j]=='U') 
                    wheel_position[i]-=1;
            }
            if(wheel_position[i]>9)
                wheel_position[i]-=10;

            else if(wheel_position[i]<0)
                wheel_position[i]+=10;
        }
        for(i=0; i<wheel; i++)
        {
            printf("%d ", wheel_position[i]);
        }
        printf("\n");
    }
    return 0;
}