#include <stdio.h>
#include <string.h>

int main()
{
    char    str[100];

    scanf("%s", str);
    for (int i = 0;i < strlen(str);i++)
    {
        for (int j = 0;j < strlen(str) - i;j++)
            printf("%c", str[j]);
        printf("\n");
    }
}