#include <stdio.h>
#include <string.h>

int main()
{
    int count[101], i, j, temp, k;
    char str[101];

    scanf("%s", str);
    for (i = 0, j = 1; i < strlen(str); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            count[j] = str[i] - 48;
            j++;
        }
    }

    for (k = 1; k < j - 1; k++)
    {
        for (i = 1; i < j - 1; i++)
        {
            if (count[i] > count[i + 1])
            {
                temp = count[i];
                count[i] = count[i + 1];
                count[i + 1] = temp;
            }
        }
    }
    for (i = 1; i < j; i++)
    {

        printf("%d", count[i]);
        if (count[i + 1] == count[j])
        {
            printf("\n");
            break;
        }
        printf("+");
    }

    return 0;
}