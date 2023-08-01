#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char word[102];
    scanf("%d", &t);
    for(i=0; i<t; i++)
    {
        scanf("%s", word);
        int length=strlen(word);
        
        if(length>10)
        {
            printf("%c%d%c",word[0],length-2,word[length-1]);
        }
        else
        {
            printf("%s", word);
        }
        printf("\n");
    }
}