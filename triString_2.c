#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char    *str;
    int     i;
    int     j;

    i = 0;
    str = (char *)malloc(sizeof(char) * 100);
    scanf("%s", str);
    while (i < strlen(str))
    {
        j = 0;
       while (j < strlen(str) - i)
            printf("%c", str[j++]);
        printf("\n");
        i++;
    }
    free(str);
}
