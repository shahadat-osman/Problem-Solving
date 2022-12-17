#include <stdio.h>
#include <string.h>
int main()
{
    int i, count = 1;
    char str[1000005];
    scanf("%s", str);

    int max = 0, len = strlen(str);
    for (i = 0; i <= len - 2; i++)
    {
        if (str[i] == str[i + 1])
            count++;
        else
        {
            if (count > max)
                max = count;

            count = 1;
        }
    }
    if (count > max)
        max = count;

    printf("%d\n", max);
}