#include <stdio.h>
#include <sstream>
#include <fstream>
#include <iostream>

int main()
{
    char str[100] = { NULL };
    printf("�����ڸ� �Է��Ͻÿ� : ");
    scanf("%s", str);


    printf("�� : %s\n", str);

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

    printf("��: %s\n", str);
    return 0;
}