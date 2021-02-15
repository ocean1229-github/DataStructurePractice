#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

#define max 26

int main()
{
    char str[101];


    srand(time(NULL));

    printf(" ·£´ý ¾ËÆÄºª Ãâ·Â \n");

    for (int i = 1; i < 101; i++)
    {
        str[i] = rand() % 26 + 65;
    }
    for (int i = 1; i < 101; i++)
    {
        printf("%c\t", str[i]);
        if (i % 16 == 0) printf("\n");
    }

    printf("\n");

    int i, len;
    int list[max] = { 0 };
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if ((str[i] >= 'A' && str[i] <= 'Z'))
        {
            if (str[i] <= 'Z')
                list[str[i] - 'A']++;
        }
    }

    for (i = 0; i < 26; i++)
    {
        {
            if (i % 4 == 0) printf("\n");
            printf("%c : %02d°³ ", 'A' + i, list[i]);
         
        }
    }


}