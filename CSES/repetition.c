#include<stdio.h>
#include<string.h>

int main()
{
    char m_sent[1000010], s_sent[]="ACGT";
    scanf("%s", m_sent);

    //fgets(m_sent, sizeof(m_sent), stdin);

    int len=strlen(m_sent), i, count=0, select, j, ary[4], max;

    for(i=0; i<len; i++)
    {
        count=0;
        select=s_sent[i];
        for(j=0; j<len; j++)
        {
            if(m_sent[j]==select)
                count++;
        }
        ary[i]=count;
    }
    
    
}