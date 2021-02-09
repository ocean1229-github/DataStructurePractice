#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>

int main()
{
    char str[100] = { NULL };
    printf("영문자를 입력하시오 : ");
    scanf("%s", str);


    printf("전 : %s\n", str);

    for (int i = 0; str[i]; i++)
    {
        if (tolower(str[i]))
        {
            str[i] = str[i] + 'A' - 'a';
        }
        else
        {
            if (toupper(str[i]))
            {
                str[i] = str[i] + 'a' - 'A';
            }
        }
    }

    printf("후: %s\n", str);
    return 0;
}